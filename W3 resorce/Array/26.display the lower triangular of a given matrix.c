#include<stdio.h>
int main()
{
    int r,c,i,j;
    int A[10][10];
    printf("Enter row and col: ");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter Elements A[%d,%d] :",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //print C
    printf("C Matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }
    printf("C Right diagonals  : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           if(i<=j)
           {
               printf("%d ",A[i][j]);
           }
           else
            printf("  ");

        }
        printf("\n");
    }
    return 0;
}
