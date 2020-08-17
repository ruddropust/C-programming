#include<stdio.h>
int main()
{
    long long n,m,a,x,y;
    scanf("%lld%lld%lld",&n,&m,&a);

    if(n%a==0)
    {
        x=(n/a);
    }
    else if(n%a != 0)
    {
        x=(n/a)+1;
    }
    if(m%a==0)
    {
        y=(m/a);
    }
    else if(m%a != 0)
    {
        y=(m/a)+1;
    }
    printf("%lld",x*y);


    return 0;
}
