#include<stdio.h>
int main()
{
    int row,col,n1,n2;
    printf("Enter row and Column Number:");
    scanf("%d%d",&n1,&n2);
    int A[n1][n2];

    for(row=0;row<n1;row++)
    {

        for(col=0;col<n2;col++)
        {
            printf("A(%d*%d)=",row,col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }
printf("A=\t");
    for(row=0;row<n1;row++)
    {
        if(row>0)
            printf("  \t");
        for(col=0;col<n2;col++)
        {

            printf("%d\t",A[row][col]);
        }
        printf("\n\n");
    }
    return 0;
}
