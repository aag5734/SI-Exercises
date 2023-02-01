#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 60
#define m 120

struct student {
    char name[n];
    float grade;
    char major[n];
};

int main(int argc, char * argv[]) {
    FILE * file = fopen(argv[1], "r");
    struct student students[n];

    char curr[m];

    char * name;
    char * grade;
    char * major;

    while (fgets(curr, sizeof(curr), file)) {
        name = strtok(curr, " ");
        grade = strtok(NULL, " ");
        major = strtok(NULL, " ");

        struct student s = {name, atof((const) grade), major};

        printf("%s\n", name);
        printf("%s\n", grade);
        printf("%s\n", major);
    } 
}