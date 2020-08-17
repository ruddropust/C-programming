#include<stdio.h>
int main(void)
{
    int base,exp;
    long long int result=1;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter Exponential: ");
    scanf("%d",&exp);


    while(exp != 0)
    {
        result *= base;
        exp--;
    }
    printf("%lld\n",result);
    return 0;
}
