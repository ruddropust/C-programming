#include<stdio.h>
#include<conio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,k,sum,r1,c1,r2,c2;
    printf("Enter row & column for A Matrix:");
    scanf("%d%d",&r1,&c1);
    printf("Enter row & column for B Matrix:");
    scanf("%d%d",&r2,&c2);
    if(c1==r2)
    {
        //scanning//
    printf("Enter Elements of A Matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Element of A Matrix [%d,%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //scanning//
    printf("Enter Elements of B Matrix:\n");
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

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum = 0;
                for(k=0;k<r1 ;k++)
                {
                    sum = sum + A[i][k] * B[k][j];
                }
            C[i][j]=sum;
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
        for(j=0;j<c2 ;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    }


else
{
    printf("Multiplication of A and B Matrix isn't possible\n");
}
getch();
    }


