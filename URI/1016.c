#include<stdio.h>
int main()
{
    int d,t;
    scanf("%d",&d);
    t = d/((90 / 60.0) - (60 / 60.0));
    printf("%d minutos\n",t);
    return 0;
}
