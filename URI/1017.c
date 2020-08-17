#include<stdio.h>
int main()
{
    int h,v;
    double fuel,d;

    scanf("%d%d",&h,&v);

    d = (v*h);
    fuel = d/12;
    printf("%.3lf\n",fuel);
    return 0;
}
