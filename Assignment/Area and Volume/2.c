#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s;
    double area;
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangel:%lf\n",area);
    return 0;
}
