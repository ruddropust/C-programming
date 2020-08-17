//1!/1+2!/2+3!/3+4!/4+5!/5//
#include<stdio.h>
int fact(int num);

int main()
{
    int sum;
    sum = (fact(1)/1) + (fact(2)/2) + (fact(3)/3 )+ (fact(4)/4 )+ (fact(5)/5);

    printf("The sum of the series is : %d\n\n",sum);
    return 0;

}
int fact(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
        fact = fact * i;
    }
    return fact;
}
