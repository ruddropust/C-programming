#include<stdio.h>
int main()
{
    double A[12][12],sum=0,avg,count;
    int i,j;
    char ch[2];
    scanf("%c",&ch);
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                scanf("%lf",&A[i][j]);
            }
        }
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                if((i+j>=12) && j>i)
                {
                    sum = sum + A[i][j];
                }
                else
                {
                    continue;
                }
            }
        }
        if(ch[0]=='S')
        {
            printf("%0.1lf\n",sum);
        }
        else if(ch[0]=='M')
        {
            printf("%0.1lf\n",sum/30.0);
        }



    return 0;
}

