// C program to count number of digits in a number
#include<stdio.h>
int main(void)
{
    int number,digit=0;;
    scanf("%d",&number);


    while(number != 0)
    {
        number/=10;
        digit++;
    }
    printf("%d",digit);
    return 0;
}
