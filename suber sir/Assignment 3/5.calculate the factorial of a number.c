//Calculate the factorial of a number using recursion//
#include<stdio.h>
int findfactorial(int x);
int main()
{
    int n,result;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = findfactorial(n);
    printf("\nFactorial of %d is : %d\n",n,result);
    return 0;
}
int findfactorial(int x)
{
    int fact=1;
    if(x != 0)
    {
        fact = fact * x;
        return fact *  findfactorial(x-1);
    }
    else
        return fact;

}
