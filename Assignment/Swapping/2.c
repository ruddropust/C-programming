//swap a number without use temporary variable
#include<stdio.h>
int main()
{
    int first,second,num1,num2;
    printf("Enter two integer:");
    scanf("%d%d",&first,&second);


    first = first - second;   //first=12-3=9
    second = first + second;  //second=9+3=12
    first = second - first;   // first = 12-9=3

    printf("First: %d\nSecond: %d\n",first,second);

    return 0;
}

