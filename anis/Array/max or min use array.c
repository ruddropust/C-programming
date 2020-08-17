#include<stdio.h>
int main()
{
    int n,i,max,min;
    printf("How many number you Compare: ");
    scanf("%d",&n);
    int num[n];
    printf("Enter %d Number: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    min = num[0];
    for(i=1;i<n;i++)
    {
        if( max<num[i])
            max = num[i];
        if(min>num[i])
            min = num[i];
    }
    printf("Maximum: %d\n",max);
    printf("Minimum: %d\n",min);
    return 0;
}
