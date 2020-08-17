#include<stdio.h>
int main()
{
    int N,i,count=0,count1=0;
    scanf("%d",&N);
    int X[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&X[i]);
    }
    for(i=0;i<N;i++)
    {
       if(X[i]>=10 && X[i]<=20 )
       {
           count++;
       }
       else
       {
           count1++;
       }
    }
    printf("%d in\n%d out\n",count,count1);



    return 0;
}
