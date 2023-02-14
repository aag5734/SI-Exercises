#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long long to_binary(int x) {
    long long bin = 0;
    int rem, i = 1;

    while (x!=0) {
        rem = x % 2;
        x /= 2;
        bin += rem * i;
        i *= 10;
    }

  return bin;
}

int to_decimal(int x) {
    int dec = 0, i = 0, rem;
    
    while (x != 0) {
        rem = x % 10;
        x /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}

long long binary(int x, int y) {
    int d = to_decimal(x) + to_decimal(y);
    return to_binary(d);
}

int main(int argc, char * argv[]) {
    long long b = binary(atoi(argv[1]), atoi(argv[2]));
    printf("%s + %s = %lld", argv[1], argv[2], b);
}