#include<stdio.h>
int main()
{
    int i,x[10];
    for(i=0;i<10;i++)
    {
        printf("Address of x[%d] is : %p\n",i,&x[i]);
    }
    printf("Address of x is : %p\n",&x);
    return 0;
}
