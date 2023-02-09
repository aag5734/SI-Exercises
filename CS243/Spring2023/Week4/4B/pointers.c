#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
    int * x;
    int * y;
    int val1 = 5;
    int data[3] = {1, 2, 3};

    /**
     * COMPARISON 1
    */
    x = &val1;
    y = x;
    printf("%d\n", (x == y));
    
    /**
     * COMPARISON 2
    */
    y = 5;
    printf("%d\n", (x == y));

   /**
    * COMPARISON 3
   */
   x = data;
   y = data + 1;
   printf("%d\n", ((++x) == y));
 
  /**
   * COMPARISON 4
  */
  x = data + 2;
  printf("%d\n", ((x) == &data[2]));
}