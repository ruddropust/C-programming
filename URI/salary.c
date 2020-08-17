#include<stdio.h>
int main()
{
    int n,h;
    float p;
    double s;
    scanf("%d%d%f",&n,&h,&p);
    s = h*p;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2lf\n",s);
    return 0;
}
