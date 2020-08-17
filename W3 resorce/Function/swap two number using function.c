#include<stdio.h>
SwapNumber(int num1,int num2);
int main()
{
    int n1,n2;
    printf("Enter First Number:");
    scanf("%d",&n1);
    printf("Enter Second Number:");
    scanf("%d",&n2);

    SwapNumber(n1,n2);

    return 0;
}
int SwapNumber(int num1,int num2)
{
    int tmp;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
    printf("First Number: %d\nSecond Number: %d\n",num1,num2);
    return num1,num2;
}
