#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]) {
    char s[100];

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
}