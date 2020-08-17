#include<stdio.h>
int main()
{
    float pi,radious;
    double area;
    scanf("%f",&radious);
    pi = 3.14159265359;
    area = pi * radious*radious;
    printf("Area of circle:%.4lf\n",area);
    return 0;
}
