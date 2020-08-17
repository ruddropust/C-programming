#include<stdio.h>
int main()
{
    int row,col,n1,n2,n3,n4,i=0,k,sum=0;
Ruddro:
    printf("Enter the row and column of A Matrix:");
    scanf("%d%d",&n1,&n2);
    printf("Enter the row and column of B Matrix:");
    scanf("%d%d",&n3,&n4);
    i++;

    int A[n1][n2],B[n3][n4],C[n1][n4];

//condition Check
    if(n2==n3)
    {
//scanning A
    printf("\n\nEnter The Elements of A Matrix\n");
    for(row=0;row<n1;row++)
    {
        for(col=0;col<n2;col++)
        {
            printf("A(%d,%d)=\t",row,col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }
//Scanning B
printf("\n\nEnter The Elements of B Matrix\n");
    for(row=0;row<n3;row++)
    {
        for(col=0;col<n4;col++)
        {
            printf("B(%d,%d)=\t",row,col);
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }
//Multiplication
    for(row=0;row<n1;row++)
    {
        for(col=0;col<n4;col++)
        {
            for(k=0;k<n2;k++)
            {
                sum = sum + A[row][k]*B[k][col];
            }
            C[row][col]=sum;
            sum=0;
        }
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
    for(row=0;row<n3;row++)
    {
        if(row>0)
            printf("  \t");
       for(col=0;col<n4;col++)
        {
            printf("%d\t",B[row][col]);
        }
        printf("\n\n\n");
    }
//print C
printf("C=\t");
    for(row=0;row<n1;row++)
    {
        if(row>0)
            printf("  \t");
       for(col=0;col<n4;col++)
        {
            printf("%d\t",C[row][col]);
        }
        printf("\n\n\n");

    }
printf(".......Great Job.......");
    }
    else
    {
        printf("\n\nError!!!\nMultiplication of A and B Matrix is Not Possible.\nBecause column of A matrix and row of B matrix isn't same.\n.....Thank You.....\n\n");
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
