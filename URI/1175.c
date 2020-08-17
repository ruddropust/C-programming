#include<stdio.h>
int main()
{
    int i,N[20],count=0;
    for(i=0;i<20;i++)
    {
        scanf("%d",&N[i]);
    }
    for(i=19;i>=0;i--)
    {
        printf("N[%d] = %d\n",count,N[i]);
        count++;
    }
    return 0;
}
