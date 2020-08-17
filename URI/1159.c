#include<stdio.h>
int main()
{
    int N,i,sum;
    while(1)
    {
        scanf("%d",&N);
        sum=0;
        if(N==0)
        {
            break;
        }
        else if(N%2==0)
        {
            for(i=N;i<N+10;i=i+2)
            {
                sum = sum + i;

            }
        }
        else
        {
            for(i=N+1;i<N+10;i=i+2)
            {
                sum = sum + i;

            }
        }
        printf("%d\n",sum);
    }
return 0;
}

