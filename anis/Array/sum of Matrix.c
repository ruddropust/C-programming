#include<stdio.h>
int main()
{
    int row,col,n1,n2,n3,n4,i=0;
Ruddro:
    printf("Enter the row and column of A Matrix:");
    scanf("%d%d",&n1,&n2);
    printf("Enter the row and column of B Matrix:");
    scanf("%d%d",&n3,&n4);
    i++;
//condition
if(n1==n3 && n2==n4)
{
    int A[n1][n2],B[n3][n4],C[n1][n2];
//scanning A
    for(row=0;row<n1;row++)
    {

        for(col=0;col<n2;col++)
        {
            printf("A(%d*%d)=",row,col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }

//scanning B
    for(row=0;row<n1;row++)
    {

        for(col=0;col<n2;col++)
        {
            printf("B(%d*%d)=",row,col);
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }

//sum of A and B Matrix and Ans C Matrix

    for(row=0;row<n1;row++)
    {

        for(col=0;col<n2;col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
        printf("\n");
    }
//printing A
printf("A=\t");
    for(row=0;row<n1;row++)
    {
        if(row>0)
            printf("  \t");
       for(col=0;col<n2;col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n\n\n");
    }
//printing B
printf("B=\t");
    for(row=0;row<n1;row++)
    {
        if(row>0)
            printf("  \t");
       for(col=0;col<n2;col++)
        {
            printf("%d\t",B[row][col]);
        }
        printf("\n\n\n");
    }
//print C Matrix
printf("A + B = C\n\n");

printf("C=\t");
    for(row=0;row<n1;row++)
    {
        if(row>0)
            printf("  \t");
       for(col=0;col<n2;col++)
        {
            printf("%d\t",C[row][col]);
        }
        printf("\n\n\n");
    }
}
else
    {
        printf("\n\nError!!!\nSum of A and B Matrix is Not Possible.\nBecause column and row of A and B Matrix isn't same.\n.....Thank You.....\n\n");
        if(i<2)
            {
            printf("Please Try Again.....\n\n");
            goto Ruddro;
            }
        else
            printf("Well try but failed,\n.....Try Again Later.....\n\n");
    }

    return 0;
}
