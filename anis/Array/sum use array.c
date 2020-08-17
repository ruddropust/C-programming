#include<stdio.h>
int main()
{
    int i,sum=0,num,count=0;


    printf("How many Number You want to sum:");

    scanf("%d",&num);
    int n[num];
    for(i=0;i<num;i++)
    {
        ++count;
        printf("Enter your %d Number: ",count);
        scanf("%d",&n[i]);
    }
    for(i=0;i<num;i++)
    {
        sum = sum + n[i];
    }
    printf("Sum:%d",sum);

    return 0;
}
