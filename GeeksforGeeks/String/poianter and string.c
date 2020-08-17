#include <stdio.h>

int main(void) {
  char name[] = "Harry Potter";

  printf("%c\n", *name);     // Output: H
  printf("%c\n", *(name+1));   // Output: a
  printf("%c\n", *(name+7));   // Output: o

  char *namePtr;

  namePtr = name;
  printf("%c\n", *namePtr);     // Output: H
  printf("%c\n", *(namePtr+1));   // Output: a
  printf("%c\n", *(namePtr+7));   // Output: o
}
