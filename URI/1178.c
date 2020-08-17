#include<stdio.h>
int main()
{
    double N[10],j,v;;
    int i;
    scanf("%lf",&v);

    for(i=0,j=v;i<100;i++)
    {
        if(i==0)
        {
        printf("N[%d] = %0.4lf\n",i,v);
        }
        else
        {

            j = j/2;
            printf("N[%d] = %0.4lf\n",i,j);
        }
    }
    return 0;
}

