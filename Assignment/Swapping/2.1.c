//swap a number without use temporary variable
#include<stdio.h>
int swapping_to_number(int f,int s)
{
    int first = s;
    int second = f;
    return first,second;
}
int main()
{
    int first,second,num1,num2;
    printf("Enter two integer:");
    scanf("%d%d",&first,&second);

    printf("First: %d\nSecond: %d\n",swapping_to_number(first,second));

    return 0;
}


