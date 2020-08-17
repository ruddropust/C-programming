#include<stdio.h>
void main()
{
    int N,i,mult=1;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        mult = mult * i;
    }
printf("%d\n",mult);
}
