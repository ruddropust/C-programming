#include<stdio.h>
int main()
{
    int r;
    double pi,vol,sa;
    scanf("%d",&r);
    pi = 3.14159;
    vol = (4* pi * (r*r*r))/3;
    sa = 4 * pi * (r*r);
    printf("Volume of a sphere:%0.2lf\nSurface area of a sphere:%0.2lf",vol,sa);
    return 0;
}
