#include<stdio.h>
int main()
{
    float A,B,C;
    scanf("%f%f%f",&A,&B,&C);


    if((A >= B+C) || (B >= (A+C)) || (C >= (B+A)))
        {
        printf("NAO FORMA TRIANGULO\n");
        }
    else if(A>B && A>C)
            {
                if((A*A) > (B*B) + (C*C))
                  {
                     printf("TRIANGULO OBTUSANGULO\n");
                  }
                else if((A*A) < (B*B) + (C*C))
                 {
                     printf("TRIANGULO ACUTANGULO\n");
                 }
            }
        else if(B>A && B>C)
            {
                if((B*B) > (A*A)  + (C*C))
                  {
                     printf("TRIANGULO OBTUSANGULO\n");
                  }
                else if((B*B) <(A*A)  + (C*C))
                 {
                     printf("TRIANGULO ACUTANGULO\n");
                 }
            }
        else if(C>A && B<C)
            {
                if((C*C) > (A*A)  + (B*B) )
                  {
                     printf("TRIANGULO OBTUSANGULO\n");
                  }
                else if((C*C) <(A*A)  + (B*B) )
                 {
                     printf("TRIANGULO ACUTANGULO\n");
                 }
            }

        if(A == B && B == C && A== C)
           {
                if(((A*A) < (B*B) + (C*C)) || ((B*B) < (A*A) + (C*C)) || ((C*C) < (B*B) + (A*A)))
                {
                    printf("TRIANGULO ACUTANGULO\n");
                }
                printf("TRIANGULO EQUILATERO\n");
           }

           else if(A == B || B == C || C == A)
           {
               if(A != B || B != C || C != A)
                {
                printf("TRIANGULO ISOSCELES\n");
                }
           }


    return 0;
}
