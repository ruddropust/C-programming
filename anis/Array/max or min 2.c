#include<stdio.h>
int main()
{
    int i,count = 0;
    int num;

    printf("How many Number You want to Compare:");

    scanf("%d",&num);
    double n[num],min,max;

    for(i=0;i<num;i++)
    {
        ++count;
        printf("Enter your %d Number: ",count);
        scanf("%lf",&n[i]);
    }
    max = n[0];
    min = n[0];

    for(i=1;i<num;i++)
    {
       if(max<n[i])
       {
           max= n[i];
       }
       if(min>n[i])
       {
           min= n[i];
       }
    }
    printf("\nMaximum Number is :\t%.4lf\n",max);
    printf("\nMinimum Number is :\t%.4lf\n",min);




return 0;
}
