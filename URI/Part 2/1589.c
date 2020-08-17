
#include<stdio.h>
int main(void)
{
    int t,r1,r2;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d%d",&r1,&r2);
        int ans = r1+r2;
        printf("%d\n",ans);
        t--;
    }
    return 0;
}
