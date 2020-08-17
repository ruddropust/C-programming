#include<stdio.h>
int main()
{
    double sum=0,N[12][12];

    int i,j,n;
    char ch[2];
    scanf("%d%s",&n,&ch);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&N[i][j]);
        }
    }
    for(i=0;i<12;i++)
    {
        sum = sum + N[i][n];
    }
    if(ch[0]=='S')
    {
        printf("%0.1lf\n",sum);
    }
    else if(ch[0]=='M')
    {
        printf("%0.1lf\n",sum/12.0);
    }

    return 0;
}
