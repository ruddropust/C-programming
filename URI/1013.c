#include<stdio.h>
int main()
{
    int a,b,s,M;
    scanf("%d%d%d",&a,&b,&s);

    M = (a+b+abs(a-b)) / 2;
    M = (M+s+abs(M-s)) / 2;

    printf("%d eh o maior\n",M);
    return 0;
}
