/**
 * FILE: faulty.c
 * AUTHOR: Abraham Gonzalez
 * DATE: 02/05/2023
 * DESC: A copy of factorial.c with some obvious bugs. Used to understand the GDB
 * debugger and how to set breakpoints
*/
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
    if (argc < 1) {
        printf("standard usage: x");
        return 1;
    }
    int n = atoi(argv[1]);
    int m = 0;

    while (n > 0) {
        m *= (n - 1);
        n = n - 1;
    }
    printf("%d\n", m);
}