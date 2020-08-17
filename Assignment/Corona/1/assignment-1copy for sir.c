
/*c1=col of A Matrix.   c2=col of B Matrix.
r1=row of A Matrix.     r2=row of B Matrix.
k=temp Variable to help multiplication.
go to statement used to design better this code.
*/
///Please scan all input use "Enter" key///

#include<stdio.h>
int main()
{
    int row,col,c1,c2,r1,r2,i=0,k,sum=0;
    printf("Enter the row and column of A Matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and column of B Matrix:");
    scanf("%d%d",&r2,&c2);
    i++;

    int A[100][100],B[100][100],C[100][100];

//condition Check//
    if(c1==r2)
    {
//scanning A//
    printf("\n\nEnter The Elements of A Matrix\n");
    for(row=0;row<r1;row++)
    {
        for(col=0;col<c1;col++)
        {
            printf("A(%d,%d)=\t",row,col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }
//Scanning B//
printf("\n\nEnter The Elements of B Matrix\n");
    for(row=0;row<r2;row++)
    {
        for(col=0;col<c2;col++)
        {
            printf("B(%d,%d)=\t",row,col);
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }
//Multiplication//
    for(row=0;row<r1;row++)
    {
        for(col=0;col<c2;col++)
        {
            for(k=0;k<r1;k++)
            {
                sum = sum + A[row][k]*B[k][col];
            }
            C[row][col]=sum;
            sum=0;
        }
    }
//printing A//
    printf("A=\t");
    for(row=0;row<r1;row++)
    {
        if(row>0)
            printf("  \t");
       for(col=0;col<c2;col++)
        {
            printf("%d\t",A[row][col]);
        }
        printf("\n\n\n");
    }
//printing B//
    printf("B=\t");
    for(row=0;row<r1;row++)
    {
        if(row>0)
            printf("  \t");
       for(col=0;col<c2;col++)
        {
            printf("%d\t",B[row][col]);
        }
        printf("\n\n\n");
    }
//print C//
    printf("C=\t");
    for(row=0;row<r1;row++)
    {
        if(row>0)
            printf("  \t");
       for(col=0;col<c2;col++)
        {
            printf("%d\t",C[row][col]);
        }
        printf("\n\n\n");

    }
    printf(".......Great Job.......");
    }
//if condition isn't right//
    else
    {
        printf("\n\nError!!!\nMultiplication of A and B Matrix is Not Possible.\nBecause column of A matrix and row of B matrix isn't same.\n.....Thank You.....\n\n");
    }
    return 0;
}
