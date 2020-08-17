
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,k,p=0;
    printf("Enter the Number of Rows     : ");
    scanf("%d",&x);
    printf("Enter the Number of Columns  : ");
    scanf("%d",&y);
    while(x!=y)
    {
        printf("Error!!!! You Need rows & columns must be equal\n");
        printf("Enter the Number of Rows     : ");
        scanf("%d",&x);
        printf("Enter the Number of Columns  : ");
        scanf("%d",&y);
    }
    int element[x][y],i,j;
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("\nelement - [%d],[%d] : ",i,j);
            scanf("%d",&element[i][j]);
        }
    }
    printf("\n\nThe matrix is : \n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%d ",element[i][j]);

        }
        printf("\n");
    }
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            if(i!=j)
            {
                if(element[i][j]==0)
                    p++;
            }


        }

    }
    k = (x*y)-p;

    if(k==x)
    {
        printf("The matrix is an identity matrix.\n");
    }
    else
    {
        printf("The matrix is NOT an identity matrix.");
    }

}
