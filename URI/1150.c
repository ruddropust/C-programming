
#include<stdio.h>
int main()
{
    long long int X[60],N,num1=0,num2=1,fibo;
    int T,i,j;
    scanf("%d",&T);
    for(i=0;i<=60;i++)
    {
        if(i==0)
        {
            X[i]=i;
        }
        else if(i==1)
        {
            X[i]=i;
        }

        else
        {
            fibo=num1+num2;
        num1=num2;
        num2=fibo;
        X[i]=num2;
        }
    }
    for(j=0;j<T;j++)
    {
        scanf("%lld",&N);
        for(i=0;i<=60;i++)
        {

            if(i==N)
        {
            printf("Fib(%d) = %lld\n",i,X[i]);
        }

        }
    }


    return 0;
}
