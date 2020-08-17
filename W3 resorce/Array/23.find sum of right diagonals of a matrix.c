#include<stdio.h>
void main()
{
    int A[10][10];
    int i,j,r,c,sum=0;
    printf("Enter row and Column:");
    scanf("%d%d",&r,&c);
    printf("Enter Matrix Elements: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Elements- A[%d,%d]: ",i,j);
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    printf("A matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                sum = sum + A[i][j];
            }

        }

    }
    printf("Sum of Diagonals: %d",sum);

}
