#include<stdio.h>
int main()
{
    int r,l,w,a,b,c;
    double perimeter1,perimeter2,perimeter3,pi;

    printf("Enter the radious of a Circle:");
    scanf("%d",&r);

    printf("Enter length and wide of a rectangle:");
    scanf("%d%d",&l,&w);

    printf("Enter the three base of a triangle:");
    scanf("%d%d%d",&a,&b,&c);

    pi = 3.14159;

    perimeter1 = 2 * pi * r;
    perimeter2 = 2 * (l+w);
    perimeter3 = (a+b+c) ;

    printf(" perimeter of a circle:%0.2lf\n perimeter of a rectangle:%0.2lf\nperimeter of a triangle:%0.2lf\n",perimeter1,perimeter2,perimeter3);
    return 0;
}
