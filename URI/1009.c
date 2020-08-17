#include<stdio.h>

int main()
{
    char name[20];
    double salary,sv,TOTAL;
    scanf("%s",&name);
    scanf("%lf",&salary);
    scanf("%lf",&sv);

    TOTAL = salary + (sv*15)/100;

    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
