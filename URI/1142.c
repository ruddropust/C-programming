#include<stdio.h>
int main()
{
    int N,i,j,k;
    scanf("%d",&N);

    for(i=0,k=0;i<N;k++,i++)
    {
        for(j=1;j<4;j++)
        {
            k++;
            printf("%d ",k);
        }
        printf("PUM\n");

    }

    return 0;
}

