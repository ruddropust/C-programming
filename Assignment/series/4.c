#include<stdio.h>
double trapezium(double b1,double b2, double h);
int main()
{
    int base1,base2,height;
    scanf("%d%d%d",&base1,&base2,&height);

    double area = trapezium(base1,base2,height);
    printf("%.lf",area);
}
double trapezium(double b1,double b2, double h){
return ((b1+b2)/2)*h;
}
