
#include<stdio.h>
int main()
{
    float A,B,C,Area,Perimetro;

    scanf("%f%f%f",&A,&B,&C);

    if ((A < (float)(B+C)) && (B < (float)(A+C)) && (C < (float)(B+A))){
    Perimetro = (A + B + C);
    printf("Perimetro = %.1f\n",Perimetro);
    }
    else{
    Area = ((A+B)/2) * C;
    printf("Area = %.1f\n",Area);
    }
    return 0;
}
