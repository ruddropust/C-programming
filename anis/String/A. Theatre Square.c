#include<stdio.h>
int main()
{
    int n,m,a,x,y;
    scanf("%d%d%d",&n,&m,&a);

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
    printf("%d",x*y);


    return 0;
}
