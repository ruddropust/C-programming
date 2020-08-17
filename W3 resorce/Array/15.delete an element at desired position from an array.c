
#include<stdio.h>
int main()
{
    int A[100],i,n,del;
    printf("Total test Case: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Elements - %d = ",i+1);
        scanf("%d",&A[i]);
    }
    printf("\n\nInput the position where to delete: ");
    scanf("%d",&del);
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        if(i+1==del)
        {
            continue;
        }
        else
        {
            printf("Elements - %d = ",i+1);
            printf("%d\n",A[i]);
        }


    }

    return 0;
}
