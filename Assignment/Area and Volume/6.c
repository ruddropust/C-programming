#include<stdio.h>
int main()
{
    int hight,base1,base2;
    double area;
    printf("Enter two base of the trapezium:");
    scanf("%d%d",&base1,&base2);
     printf("Enter hight of the trapezium:");
    scanf("%d",&hight);

    area = ((base1+base2)/2) * hight;

    printf("Area:%0.2lf\n",area);
    return 0;
}
