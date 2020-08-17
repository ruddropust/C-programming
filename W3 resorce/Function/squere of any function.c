
#include<stdio.h>
void SquereOfNumber(int num);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    SquereOfNumber(n);

}
void SquereOfNumber(int num)
{
    double res;
    res = num*num;

    printf("%0.2lf",res);
}
