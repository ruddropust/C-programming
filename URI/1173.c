#include<stdio.h>
int main()
{
    double N[10];
    int i,j,v;
    scanf("%d",&v);

    for(i=0,j = v;i<10;i++)
    {
        if(i==0)
        {
        printf("N[%d] = %d\n",i,v);
        }
        else
        {

            j = j*2;
            printf("N[%d] = %d\n",i,j);
        }
    }
    return 0;
}
