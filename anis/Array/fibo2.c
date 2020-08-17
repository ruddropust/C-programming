#include<stdio.h>
int main()
{
    int n,i,a[50];
    printf("How many number you see: ");
    scanf("%d",&n);

    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-2]+a[i-1];

    }
         printf("\n");
     for(i=0;i<n;i++)
     {
         printf("%d\n",a[i]);
     }
     return 0;
 }
