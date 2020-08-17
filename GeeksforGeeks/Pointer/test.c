#include <stdio.h>
int main() {
   int x[16];
   int i;

   for(i = 0; i < 16; i++)
    {
        printf("&x[%d] = %p\n", i, &x[i]);
    }

   printf("Address of array x: %p", x);

   return 0;
}
