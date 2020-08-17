#include<stdio.h>
int main()
{
    double div;
    int i,N,X,Y;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d%d",&X,&Y);

    if(Y==0)
    {
        printf("divisao impossivel\n");
    }
    else
    {
        div = (double)X / (double)Y;
        printf("%0.1lf\n",div);
    }
    }

    return 0;
}
