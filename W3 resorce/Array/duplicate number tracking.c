#include<stdio.h>
int main()
{
    int A[100],B[100],C[100];
    int count=0,track=1,i,j,n;
    //test cases input//
    printf("Enter total Elements Number in Array:");
    scanf("%d",&n);
    printf("Enter %d Input an Array\n",n);
    //input//
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&A[i]);
    }
    //copying Array A to B//
    for(i=0;i<n;i++)
    {
        B[i]=A[i];
        C[i]=0;
    }
    //main process//
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i]==B[j])
            {
                C[j]=track;
                track++;
            }
        }
        track=1;
    }
    //print duplicate number//
    for(i=0;i<n;i++)
    {
        if(C[i]==2)
        {
            count++;
        }
    }
    printf("The total number of duplicate elements found in the array is: %d \n",count);
    printf("\n\n\n");
    return 0;
}
