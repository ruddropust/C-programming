#include<stdio.h>
int main()
{
    int i,j,k,x,y,total;
    scanf("%d%d",&x,&y);
    total = y/3;
    for(i=0,k=1;i<total;i++)
    {
        if(k>y)
        {
            break;
        }
        for(j=0;j<x;j++)
        {
            if(j<=x-2)
            {
                printf("%d ",k);
                k++;
            }
            else
            {
                printf("%d\n",k);
                k++;
            }

        }
    }
    return 0;
}
