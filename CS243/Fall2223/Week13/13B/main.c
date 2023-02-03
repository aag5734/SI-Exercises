#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include "counter.h"

void start_threads(int n) {
    pthread_t threads[n - 1];
    Counter * counters[n - 1];

    for (int i = 0; i < n - 1; i++) {
        counters[i] = make_counter(i + 1);
    }

    for (int i = 0; i < n - 1; i++) {
        if (pthread_create(&threads[i], NULL, run, (void *) counters[i]) ) {
            fprintf(stderr, "error creating thread\n");
            exit(1);
        }
    }

    for (int i = 0; i < n - 1; i++) {
        if (pthread_join(threads[i], NULL)) {
            fprintf(stderr, "error joining thread.");
            exit(1);
        }
    }
}