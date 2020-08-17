#include<stdio.h>
int main()
{
    double N,avg,sum=0,count=0;

    while(1)
    {
        if(count>=2)
            break;
        scanf("%lf",&N);

        if(N>=0 && N<=10)
        {
            sum = sum + N;
            count++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    avg = sum/2.00;
    printf("media = %0.2lf\n",avg);
    return 0;
}
