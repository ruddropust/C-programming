//No arguments passed but a return value//

#include<stdio.h>
int GetInteger();
int main()
{
    int count,n,i;

    n=GetInteger();
    for(i=2,count=0;i<=n/2;++i)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
        {
            printf("%d is a Prime number.\n",n);
        }
        else
        {
            printf("%d isn't a Prime number.\n",n);

        }
    return 0;
}
int GetInteger()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    return n;
}
