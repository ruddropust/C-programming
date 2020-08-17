#include<stdio.h>
int main()
{
    int T,N[1000],i,j,k;
    scanf("%d",&T);
    for(i=0,j=0;i<1000;j++,i++)
    {
        if(j==T)
        {
            j=0;
        }
        printf("N[%d] = %d\n",i,j);

    }
    return 0;
}
