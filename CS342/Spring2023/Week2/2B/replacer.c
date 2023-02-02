/**
 * FILE: replacer.c
 * AUTHOR: Abraham Gonzalez
 * DATE: 02/02/2023
 * DESC: Given some file, a word to be searched for, and a new word, we want to read the file's
 * contents and output it to stdout while replacing one word with a new word. Ex; ./replacer words.txt John Smith
 * replaces "John" with "Smith"
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]) {
    FILE * file = fopen(argv[1], "r+");
    char * line;
    char * curr;

    while (fgets(line, sizeof(line), file)) {
        curr = strtok(line, " ");

        while (curr != NULL) {
            if (strcmp(curr, argv[2])) {
                printf("%s ", argv[3]);
            } else {
                printf("%s ", curr);
            }
            curr = strtok(NULL, " ");
        }
    }
}