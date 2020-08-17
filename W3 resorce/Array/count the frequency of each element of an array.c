#include<stdio.h>
int main()
{
    int A[100],B[100],n,i,j,count;
    printf("Enter total check number: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Number -%d:",i+1);
        scanf("%d",&A[i]);
    }



    return 0;
}
