#include<stdio.h>
int main()
{
    int r1,r2,a1,a2;
    float x1,x2,TOTAL;
    scanf("%d%d%f",&r1,&a1,&x1);
    scanf("%d%d%f",&r2,&a2,&x2);

    TOTAL = (a1*x1) + (a2*x2);

    printf("VALOR A PAGAR: R$ %.2f\n",TOTAL);
    return 0;
}

