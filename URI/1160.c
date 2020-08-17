#include<stdio.h>
int main()
{
    int PA,PB,T,i,year=0;
    double G1,G2;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        year=0;
        scanf("%d%d%lf%lf",&PA,&PB,&G1,&G2);
        while(PA<=PB)
        {

            PA=PA+((PA*G1)/100);
            PB=PB+((PB*G2)/100);
            year++;
            if(year>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(year<=100)
            {
                printf("%d anos.\n",year);

            }
    }
    return 0;
}
