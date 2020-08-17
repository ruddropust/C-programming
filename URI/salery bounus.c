
#include<stdio.h>
int main()
{
    char name[30];
    double se,TOTAL;
    float sa,


    gets(name);

    scanf("%f%lf",&sa,&se);
    TOTAL = sa + (se*15)/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);

    return 0;
}
