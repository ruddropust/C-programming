//Check given Number Prime and Armstrong//

#include<stdio.h>
#include <math.h>
#include<conio.h>
int checkprime(int num);
int checkarmstrong(int num1);
int main()
{
    int n,p,a;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    p = checkprime(n);
    a = checkarmstrong(n);
    if(p==0)
    {
        printf("Given Number is a prime ?\n\'Yes\'\n");
    }
    else
    {
        printf("Given Number is a prime ?\n\'No\'\n");
    }
    if(a==0)
    {
        printf("Given Number is a armstrong ?\n\'Yes\'\n");
    }
    else
    {
        printf("Given Number is a armstrong ?\n\'No\'\n");
    }
    if(a==p)
    {
        printf("Given Number is a prime and armstrong Number ?\n\'Yes\'\n");
    }
    else
    {
        printf("Given Number is a prime and armstrong Number ?\n\'No\'\n");
    }
    getch();
}
int checkprime(int num)
{
    int i,count=0,rem,sum=0,temp=0,dig,num1,num2;
    for(i=2;i<=num/2;i++)
    {
        if(num % i == 0)
        {
            count++;
        }
        else
            {
                count=0;
            }

    }
    if(count==0)
    {
        return 0;
    }

    else
    {
        return 1;
    }
}
int checkarmstrong(int num1)
{
    int sum=0,rem,dig=0,case1,case2;

    case1 = num1;
    while(case1 !=0)
    {
        case1/=10;
        ++dig;
    }

    while(case2 !=0)
    {
        rem= case2%10;
        sum += pow(rem,dig);
        case2/=10;
    }
    if(dig == 1)
    {
        return 0;
    }
    else if(sum == num1)
    {
        return 0;
    }
    else
    {
         return 1;
    }

}


