#include<stdio.h>
int main()
{
    int first,second,temp;
    printf("Enter two integer:");
    scanf("%d%d",&first,&second);

    temp = first;
    first = second;
    second = temp;

    printf("First: %d\nSecond: %d\n",first,second);

    return 0;
}
