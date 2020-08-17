#include<stdio.h>
int main()
{
    int A[100],i,j,sum,n;

    printf("total Value of Array:");
    scanf("%d",&n);
    printf("The given array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The given sum :");
    scanf("%d",&sum);
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             if(A[i]+A[j] == sum)
             {
                 printf("Pair of elements can make the given sum by the value of index %d and %d\n",i,j);
                 break;
             }
         }
     }

    return 0;
}
