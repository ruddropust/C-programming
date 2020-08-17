#include<stdio.h>
#include<conio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,sum=0,r1,c1,r2,c2;
    printf("Enter row & column for A Matrix:");
    scanf("%d%d",&r1,&c1);
    //scanning//
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Element of A Matrix [%d,%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("Enter row & column for B Matrix:");
    scanf("%d%d",&r2,&c2);
    //scanning//
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Element of B Matrix [%d,%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    //subtraction//
    if(r1==r2 && c1==c2)
    {
        for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    //print//
    printf("The A Matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("The B Matrix is:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("The C Matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}
else
{
    printf("Subtraction of A and B Matrix isn't possible\n");
}
getch();
    }

