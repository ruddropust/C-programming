#include<stdio.h>
int main()
{
    int diagonal1,diagonal2;
    double area;
    printf("Enter two diagonal of Rhombus:");
    scanf("%d%d",&diagonal1,&diagonal2);

    area = (diagonal1*diagonal2)/2;
    printf("Area:%0.2lf",area);
    return 0;
}
