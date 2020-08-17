#include<stdio.h>
double add(double num1,double num2);
int main()
{
    double a,b,c;
    b=2.7;
    a=2.8;
    c=add(a,b);
    printf("%0.2lf\n",c);
    return 0;
}
double add(double num1,double num2)
{
    double sum = num1+num2;
    return sum;
}
