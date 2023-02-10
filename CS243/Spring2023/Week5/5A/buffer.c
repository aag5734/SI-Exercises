#include <stdio.h>

char buf[4];
char a;
char b;

int main(void) {
    a = (char) 7;
    b = (char) 12;
    strcpy(buf, "good");
    printf( "%d%s\n", (int) a * (int) b, buf);
    return(0);
}
