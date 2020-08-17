#include<stdio.h>
int main()
{
    int A[100][100],i,j,N;
    while(1)
    {
        scanf("%d",&N);
        if(N==0)
            break;
        else
        {
            for(i=1;i<N;i++)
            {
                for(j=1;j<N;j++)
                {
                    if(i>j)
                    {
                        printf("%d ",j);
                    }
                    else
                    {
                        printf("%d ",i);
                    }
                }
                printf("\n");
            }
            for(i=1;i<N;i++)
            {
                for(j=N-2;j>0;j--)
                {
                    if(i>j)
                    {
                        printf("%d ",j);
                    }
                    else
                    {
                        printf("%d ",i);
                    }
                }
                printf("\n");
            }
        }

    }

    return 0;
}
