#include<stdio.h>
#include<math.h>
int main()
{
    int radious,height,pi;
    double volume,sa;
    scanf("%d%d",&radious,&height);

    pi = 3.14159;
    volume = (pi * (radious*radious) * height)/3 ;
    sa = pi * radious *(radious + sqrt(height*height + radious*radious));

    printf("Surface area of a cone: %0.2lf\nVolume of a cone:%0.2lf\n",sa,volume);
     return 0;
}
