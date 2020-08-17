#include<stdio.h>
int main()
{
    float A,B,C;
    double tri,cir,tra,s,r,pi;
    scanf("%f%f%f",&A,&B,&C);
    pi = 3.14159;
    tri = .5 * A * C;
    cir = pi * (C*C);
    tra = (A+B)/2*C;
    s = B*B;
    r = A*B;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",s);
    printf("RETANGULO: %.3lf\n",r);
    return 0;
}
