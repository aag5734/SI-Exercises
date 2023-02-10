#include <stdlib.h>
#include <stdio.h>

struct node {
    int val;
    struct node * next;
};

int findVal(int x, struct node list) {
    int i = 0;
    while (list.next != NULL) {
        if (list.val == x) {
            return i;
        }
        i++;
    }
    return -1;
}