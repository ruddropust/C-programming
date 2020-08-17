#include<stdio.h>
int main()
{
    int A[10],E[10],O[10];
    int i,n,j=0,k=0;

    //Total Check Case//
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);

    printf("\nInput 5 elements in the array :",n);

    //storing Array A//
    for(i=0;i<n;i++)
    {
        printf("\nelement - %d : ",i+1);
        scanf("%d",&A[i]);
    }

   //condition Check//

    for(i=0;i<n;i++)
    {
        if(A[i]%2==0)
        {
            E[j]=A[i];
            j++;
        }
        else
            {
                O[k]=A[i];
                k++;
            }

    }

    //print//
    printf("\n\nExpected Output :");

    printf("\nThe Even elements are : \n");

    for(i=0;i<j;i++)
    {
        printf("%d\n",E[i]);

    }
    printf("\nThe Odd elements are : \n");
    for(i=0;i<k;i++)
    {
        printf("%d\n",O[i]);

    }
    getch();
}
