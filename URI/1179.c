#include<stdio.h>
int main()
{
    int A[15],B[15],C[15];
    int i,j,k;
    for(i=0;i<15;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0,j=0;i<n;i++,j++)
    {
        for(A[i]%2==0)
        {
            B[j]=A[i];
        }
    }
    for(i=0,k=0;i<n;i++,k++)
    {
        for(A[i]%2==0)
        {
            B[k]=A[i];
        }
    }

    return 0;
}
