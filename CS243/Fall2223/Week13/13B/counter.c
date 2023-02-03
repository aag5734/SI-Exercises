#define _DEFAULT_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include "counter.h"

static long delay = 0;
static pthread_mutex_t mymutex = PTHREAD_MUTEX_INITIALIZER; 

/*
Used to set the delay time for each counter
**/
void init_counters(long milliseconds) {
    delay = milliseconds;
}

/*
Creates a counter using a name and position
**/
Counter * make_counter(int position) {
    Counter * r;

    r = (Counter *) calloc(1, sizeof(Counter));
    
    r->row = position;
    r->num = 1;
    r->dist = 0;

    pthread_mutex_lock(&mymutex);
    set_cur_pos(r->row);
    put('|');
    pthread_mutex_unlock(&mymutex);

    return r;
}

/*
Deallocates the counter from memory
**/
void destroy_counter(Counter * counter) {
    free(counter);
}

/*
Simulates a race
**/
void * run(void * counter) {
    Counter * c = (Counter *) counter;
    int modulo;
    while (c->num < 20) {
        modulo = (rand() % delay) * 1000;

        if (modulo <= 3000) {
            pthread_mutex_lock(&mymutex);
            set_cur_pos(c->row, c->dist);
            c->num += 1;
            put(c->num);
            pthread_mutex_unlock(&mymutex);
            break;
        } else {
            usleep(modulo);
            pthread_mutex_lock(&mymutex);
            set_cur_pos(c->row, c->dist);
            c->dist += 1;
            put(c->num);
            pthread_mutex_unlock(&mymutex);
        }
    }
    return NULL;
}
