#include <stdio.h>

void addOne(int* ptr) {
    int i;
    for(i=1;i<=3;i++)(*ptr)++; // adding 1 to *ptr

}

int main()
{
  int* p, i = 10;
  p = &i;
  addOne(p);

  printf("%d", *p); // 11
  return 0;
}
