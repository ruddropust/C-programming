#include<stdio.h>
int main()
{
    long long int n,m;
    while(scanf("%lld%lld",&n,&m) != EOF)
    {
        if(n>m)
            printf("%lld\n",n-m);
        else
            printf("%lld\n",m-n);
    }
    return 0;
}
