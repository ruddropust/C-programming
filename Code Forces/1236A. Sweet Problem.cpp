#include<stdio.h>
int main()
{
    int t,r,g,b,i,count;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d%d%d",&r,&g,&b);
        for(i=0,count=0;(r>0||g>0||b>0);i--)
        {
            if(r!=0 || g!=0)count++;
        }
        t--;
    }
}
