

#include<stdio.h>
int main()
{
    int A[100],i,n,new_num,ins,tmp;
    printf("Total test Case: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Elements - %d = ",i+1);
        scanf("%d",&A[i]);
    }
    printf("\nInput the value to be inserted : ");
    scanf("%d",&new_num);
    printf("\nInput the position where to insert: ");
    scanf("%d",&ins);
    printf("\n\n");
    for(i=0;i<n+1;i++)
    {
        if(i+1==ins)
        {
            tmp=A[i];
            A[i]=new_num;
            A[i+1]=tmp;

        }
        else
        {
            printf("%d\n",A[i]);
        }


    }

    return 0;
}
