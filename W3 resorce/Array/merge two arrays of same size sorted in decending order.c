///Bismillaher Rahmanir Rahim///

#include<stdio.h>
#include<conio.h>
int main()
{
    int A[100],B[100],C[100];
    int n1,n2,n3,i,j,temp;
    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&n1);
    for(i=0;i <n1;i++)
    {
        printf("\nElement %d :",i+1);
        scanf("%d",&A[i]);
    }
    printf("\n\nInput the number of elements to be stored in the Second array :");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        printf("\nElement - %d :",i+1);
        scanf("%d",&B[i]);
    }

    //merge 2 Array//
    n3 = n1 + n2;
    for(i=0;i<n1;i++)
    {
        C[i]=A[i];
    }
    for(j=0;j<n2;j++)
    {
        C[i]=B[j];
        i++;
    }
//sorting Array//
     for(i=0;i<n3;i++)
    {
        for(j=0;j<n3-1;j++)
        {
            if(C[j]<C[j+1])
            {
                temp = C[j];
                C[j]=C[j+1];
                C[j+1]=temp;
            }
        }
    }
    //printing//
    for(i=0;i<n3;i++)
        {
          printf("%d\n",C[i]);
        }


    getch();
}
