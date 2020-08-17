#include<stdio.h>
int main()
{
    int n,i,number;
    printf("how many number you Entered:");
    scanf("%d",&n);
    int array1[n],array2[n];
    printf("array1: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }
    printf("array2: ");
    for(i=0;i<n;i++)
    {
         printf("%d  ",array2[i]);
    }
    getch ();
}
