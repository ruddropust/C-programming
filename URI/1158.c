
#include<stdio.h>
int main()
{
    int N,M,X,i,j,sum;
    scanf("%d",&X);
    for(j=1;j<=X;j++)
    {
        scanf("%d%d",&N,&M);
        sum=0;
        if(N%2==0)
        {
            for(i=N+1;i<(N+(M*2));i=i+2)
            {
                sum = sum + i;

            }
        }
        else
        {
            for(i=N;i<(N+(M*2)-1);i=i+2)
            {
                sum = sum + i;

            }
        }
        printf("%d\n",sum);
    }
return 0;
}
