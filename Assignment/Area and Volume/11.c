#include<stdio.h>
int main()
{
    int r,h;
    double pi,volume,sa;
    scanf("%d%d",&r,&h);
    pi = 3.14159;
    volume = pi * (r*r) * h;
    sa = (2*pi*r*h) + (2*pi*r*r);
    printf("Surface area of Cylinder: %0.2lf\nVolume of Cylinder: %0.2lf\n",sa,volume);
    return 0;
}
