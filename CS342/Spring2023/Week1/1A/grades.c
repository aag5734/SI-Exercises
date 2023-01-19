#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
    printf("%s: \n", argv[1]);
    int g = 0;

    for (int i = 1; i < argc; i++) {
        g += atoi(argv[i]);
    }

    float f = (g / (argc - 1));

    printf("Final Grade: %f", f); 
}