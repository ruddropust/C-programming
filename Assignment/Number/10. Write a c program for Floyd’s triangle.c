#include<stdio.h>
int main()
{
    int row,count = 1,i,j;
    printf("Enter rows: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%4d",count);
            count++;
        }
        printf("\n");

    }

    return 0;
}
