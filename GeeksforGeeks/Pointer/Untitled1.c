#include<stdio.h>
void swap(int *n1,int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    int n1=20,n2=10;
    swap(&n1,&n2);
    printf("N1 = %d\nN2 = %d\n",n1,n2);

    return 0;
}
