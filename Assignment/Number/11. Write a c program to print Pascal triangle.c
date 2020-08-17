#include<stdio.h>
int main()
{
    int row,col = 1,i,j,k;
    printf("Enter rows: ");
    scanf("%d",&row);

    for(i=0;i<row;i++)
    {
        for(k=1;k<=row-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(j==0 || i==0)
                col=1;
            else
            {
                col = col * (i-j+1)/j;
            }
            printf("%2d",col);
        }
        printf("\n");

    }

    return 0;
}
