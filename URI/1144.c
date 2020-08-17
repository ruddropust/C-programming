/**Bismillahir Rahmanir Rahim.**/
#include<stdio.h>
int main()
{
    int N,i,j,a,b,c;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        j=i*i;
        a=i*i*i;
        printf("%d %d %d\n",i,j,a);
        b=j+1;
        c=a+1;
        printf("%d %d %d\n",i,b,c);

    }
    return 0;
}
