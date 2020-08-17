#include<stdio.h>
void main()
{
    int A[100],n,i,max,min;

    //total test cases//
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);

    //input//
    printf("\nInput 3 elements in the array :\n");
    for(i=0;i<n;i++)
    {
        printf("element - %d : ",i+1);
        scanf("%d",&A[i]);
    }
    max=A[0];
    min=A[0];
    for(i=1;i<n;i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
        if(min>A[i])
        {
            min=A[i];
        }
    }
    printf("\n\nExpected Output :");
    printf("\nMaximum : %d\nMinimum : %d\n",max,min);
}
