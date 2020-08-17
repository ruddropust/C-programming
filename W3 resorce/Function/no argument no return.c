//No arguments passed and no return value//

#include<stdio.h>
void PrimeNumber();
int main()
{
    PrimeNumber();
    return 0;
}
void PrimeNumber()
{
    int n,i,count;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=2,count=0;i<=n/2;++i)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
        {
            printf("%d is a Prime number\n.",n);
        }
        else
        {
            printf("%d isn't a Prime number.\n",n);

        }
}
