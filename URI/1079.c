#include<stdio.h>
int main()
{
    int N,i;
    float X,Y,Z,sum;
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        scanf("%f%f%f",&X,&Y,&Z);
             double ans = ((X*2)/10) + ((Y*3)/10) + ((Z*5)/10);
             printf("%.1f\n",ans);
    }

    return 0;
}
