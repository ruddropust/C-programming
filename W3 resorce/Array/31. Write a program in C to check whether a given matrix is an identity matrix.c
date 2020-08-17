#include<stdio.h>
void main()
{
    int r,c,i,j,A[10][10],check=0;
    //scanning row and column//
    printf("Enter Row: ");
    scanf("%d",&r);
    printf("Enter Column: ");
    scanf("%d",&c);

    //scanning Array//
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("elements - A[%d],[%d] :",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //printing Array//
     printf("\nThe Matrix is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%4d",A[i][j]);
        }
        printf("\n");
    }
    //condition check//
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if((A[i][j] == 1 || A[i][j] == 0) && (A[j][i] !=0 || A[j][i] !=1))
            {
                if(i==j)
                {
                    check = 1;
                    if(A[i][j]==0)
                    {
                        check = 0;
                        break;
                    }
                }
                if(i != j)
                {
                    if(A[i][j]==1)
                    {
                        check = 0;
                        break;
                    }
                }
            }
            else
            {
                check=0;
                break;
            }

        }

    }
    if(check == 1)
    {
        printf("The matrix is an identity matrix.\n");
    }

    else
    {
        printf("The matrix is not an identity matrix.\n");
    }

}
