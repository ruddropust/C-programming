#include<stdio.h>
int main()
{
    int n,a,b,c,count=0;
    scanf("%d",&n);

    while(n != 0)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a + b + c >= 2) count++;
        n--;

    }
    printf("%d",count);
    return 0;
}
