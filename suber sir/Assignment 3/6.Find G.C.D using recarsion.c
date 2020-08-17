//Find G.C.D using recursion//

#include<stdio.h>
int findGCD(int n1,int n2);
int main()
{
    int num1,num2,gcd;

    printf("Enter two positive integer: ");
    scanf("%d%d",&num1,&num2);

    gcd = findGCD(num1,num2);

    printf("G.C.D of %d and %d is :%d\n",num1,num2,gcd);
    return 0;
}
int findGCD(int n1,int n2)
{
    if(n2 != 0)
    {
        return findGCD(n2,n1 % n2);
    }
    else
        return n1;
}
