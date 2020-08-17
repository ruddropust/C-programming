//Calculate the power of a number using recursion//
#include<stdio.h>
int powerofNumber(int b,int p);
int main()
{
    int base,power,result;
    printf("Enter Base :");
    scanf("%d",&base);
    printf("Enter Power :");
    scanf("%d",&power);

    result = powerofNumber(base,power);
    printf("Result : %d",result);
    return 0;
}
int powerofNumber(int b,int p)
{
    if(p != 0)
    {
        return (b * powerofNumber(b,(p-1)));
    }
    else
        return 1;
}
