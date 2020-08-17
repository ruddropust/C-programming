
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x1,x2,y;
    scanf("%lf%lf%lf",&a,&b,&c);
    y = sqrt((b*b)-(4*a*c));

    x1 = (-b+y)/2*a;
    x2 = (-b-y)/2*a;
    printf("x1=%lf\nx2=%lf\n",x1,x2);
    return 0;
}
