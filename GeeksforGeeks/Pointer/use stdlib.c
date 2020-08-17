#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *p1,*p2;
 p1 = (int *)calloc(5,sizeof(int));
 p2 = (int *)malloc(5*sizeof(int));

 if(p1 == NULL || p2 == NULL)
 {
     printf("Memory not allocated\n");
 }
 else
 {
     printf("Memory allocated Successful\n");
     realloc(10,sizeof(float));
     printf("Memory free successful.\n");
 }

 return 0;
}
