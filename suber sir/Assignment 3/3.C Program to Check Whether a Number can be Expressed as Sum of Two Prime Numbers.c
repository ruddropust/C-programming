//Check whether a number can be expressed as the sum of two prime numbers//
#include<stdio.h>
int findprimenumber(int x);
int main()
{
    int num,i,count2=0;
    printf("Enter a positive integers: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {

        if(findprimenumber(i) == 1)
        {
            if(findprimenumber(num-i) == 1)
            {
                printf("%d = %d + %d\n", num, i, num - i);
                count2 = 1;
            }
        }

    }
    if (count2 == 0)
        printf("%d cannot be expressed as the sum of two prime numbers.", num);

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
