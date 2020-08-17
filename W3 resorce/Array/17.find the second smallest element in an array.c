#include<stdio.h>
int main()
{
    int A[100],i,j,n,tmp;
    printf("Total test Case: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Elements - %d = ",i+1);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(A[j]>A[j+1])
            {
                tmp = A[j];
                A[j]=A[j+1];
                A[j+1]=tmp;
            }
        }
    }
    printf("After Sorting Ascending Order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    for(i=1;i<n;i++)
    {
        if(A[i]<A[i+1])
            {
            printf("\n\nThe Second smallest element in the array is : %d",i);
        break;
            }

    }

    return 0;
}
