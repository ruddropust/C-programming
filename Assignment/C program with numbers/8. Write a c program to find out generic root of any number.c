#include<stdio.h>
int generic_root(long long int a)
{
    int sum,reminder;
    while(a>0)
    {
        sum = 0;
        while(a!=0)
        {
                reminder = a%10;
                a/=10;
                sum +=reminder;
        }
        if(sum>10) a = sum;
        else break;
    }
    return sum;
}
int main(void)
{
    long long int number;
    scanf("%lld",&number);

    int result = generic_root(number);
    printf("Generic root : %d\n",result);

    return 0;
}
