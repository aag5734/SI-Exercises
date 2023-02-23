/**
 * NAME: Abraham Gonzalez
 * FILE: valgrind.c
 * DATE: 02/23/2023
 * DESC: A clearly buggy program used to decrypt valgrind's error messages
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]) {
    /**
    Problem 1
    */
    float f = 0;

    if (f == 12.4) {
        printf("That's 12.4 alright.\n");
    }

    /**
    Problem 2
    */
    int * ptr;

    ptr = (int *) malloc(10 * sizeof(int));

    ptr[0] = 1;

    free(ptr);

    /**
    Problem 3
    */
    char ** str = (char **) malloc(10 * sizeof(char *));

    for (int i = 0; i < 10; i++) {
        str[i] = (char *) malloc(5 * sizeof(char));
    }
    for (int i = 0; i < 10; i++) { 
        free(str[i]);
    }
    free(str);
}
