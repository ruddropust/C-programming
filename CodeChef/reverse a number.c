#include<stdio.h>
int main(void)
{
    int i,T,N,reminder,reverse;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {

        scanf("%d",&N);
        reverse=0;
        while(N != 0)
        {

        reminder = N%10;
        reverse = reverse*10+reminder;
        N=N/10;

        }
        printf("%d\n",reverse);
    }

}
