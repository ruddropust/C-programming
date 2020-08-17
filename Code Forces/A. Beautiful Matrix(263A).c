#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int A[5][5],i,j,x=0,k,l;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0,k=1;i<5;k++,i++)
    {
        for(j=0,l=1;j<5;l++,j++)
        {
                if(A[i][j]==1)
                {
                    x = abs(k-3)+abs(l-3);
                    break;
                }
        }
    }
    printf("%d",x);

    return 0;
}
