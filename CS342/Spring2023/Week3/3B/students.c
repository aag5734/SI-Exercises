/**
 * FILE: students.c
 * AUTHOR: Abraham Gonzalez
 * DATE: 02/02/2023
 * DESC: Simple program that creates an array (length 5) of Student structs by reading
 *      a file with a student name, their grade, and major on each line
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 60
#define m 120
#define k 5

struct student {
    char name[n];
    float grade;
    char major[n];
};

int main(int argc, char * argv[]) {
    FILE * file = fopen(argv[1], "r");
    struct student students[k];

    char curr[m];

    char * name;
    char * grade;
    char * major;
    int i = 0;

    while (fgets(curr, sizeof(curr), file)) {
        name = strtok(curr, " ");
        grade = strtok(NULL, " ");
        major = strtok(NULL, " ");

        struct student s = {name, atof((const) grade), major};
        students[i] = s;

        printf("%s\n", name);
        printf("%s\n", grade);
        printf("%s\n", major);
    }
}