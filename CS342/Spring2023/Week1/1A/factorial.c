#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
    if (argc < 1) {
        printf("standard usage: x");
        return 1;
    }
    int n = atoi(argv[1]);
    int m = 0;

    while (n >= 1) {
        m += m * n;
        n = n - 1;
    }
    printf("%d\n", m);
}