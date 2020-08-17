#include<stdio.h>
int main()
{
    double R,pi,VOLUME;
    scanf("%lf",&R);
    pi = 3.14159;
    VOLUME = (4.0/3) * pi * (R*R*R);
    printf("VOLUME = %.3lf\n",VOLUME);
    return 0;
}
