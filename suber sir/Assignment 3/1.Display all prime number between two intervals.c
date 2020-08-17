//Display all prime number between two intervals//

#include<stdio.h>
int findprimenumber(int x);
int main()
{
    int num1,num2,i,result;
    printf("Enter two positive integers: ");
    scanf("%d%d",&num1,&num2);
    printf("All Prime Number between %d and %d:\n",num1,num2);
    for(i=num1;i<=num2;i++)
    {
        if(i==1)i++;
        result = findprimenumber(i);
        if(result == 1)
        {
            printf("%d\n",i);
        }

    }


    return 0;
}
int findprimenumber(int x)
{
    int i,count=0;
    for(i=2;i<=x/2;i++)
    {
        if(x%i == 0)
        {
            count++;
            continue;
        }
    }
    if(count!=0)
        return 0;
    else
        return 1;
}
