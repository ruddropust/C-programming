#include <stdio.h>
int main() {
  int x[5] = {1, 2, 3, 4, 5};
  int* ptr;

  // ptr is assigned the address of the third element
  ptr = &x[2];

  printf("*ptr = %d \n", *ptr);   // 3
  printf("*(ptr+2) = %d \n", *(ptr+2)); // 4
  printf("*(ptr-2) = %d", *(ptr-2));  // 2

  return 0;
}
