//Find the sum of natural numbers using recursion//
#include<stdio.h>
int Sumofnaturalnum(int x);
int main()
{
    int n,result;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = Sumofnaturalnum(n);
    printf("Sum : %d",result);
    return 0;
}
int Sumofnaturalnum(int x)
{
    int sum=0;
    if(x != 0)
    {
        sum = sum + x;
        return sum +  Sumofnaturalnum(x-1);
    }
    else
        return sum;

}
