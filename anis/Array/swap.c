//swap use array
#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("How many Number You want to Swap: ");
    scanf("%d",&n);
    int num[n],num2[n];

    for(i=0;i<n;i++)
    {
        ++count;
        printf("Enter %d Number:\t",count);
        scanf("%d",&num[i]);
    }
     printf("\n\nArray1:\t");

    for(i=0;i<n;i++)
    {
       printf("%d\t",num[i]);
    }



    for(i=0;i<n;i++)
    {
       num2[i] = num[i];
    }
    printf("\n\nArray2:\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",num2[i]);
    }
printf("\n");
    return 0;
}
