#include<stdio.h>
int main()
{
    int n,i,j,X,d,sum;
    scanf("%d",&X);

    for(i=1;i<=X;i++)
    {   sum=0;
        scanf("%d",&n);
        d = n/2;

        for(j=1;j<=d;j++)
        {
            if(n%j==0)
            {
                sum = sum + j;
            }
        }
        if(sum==n)
        {
            printf("%d eh perfeito\n",n);
        }
        else
        {
            printf("%d nao eh perfeito\n",n);
        }
    }


    return 0;
}
