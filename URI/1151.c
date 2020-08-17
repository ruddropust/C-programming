#include<stdio.h>
void main()
{
    int N,i,a=0,b=1,sum;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
            sum=0;
        if(i==0 || i==1)
        {
            printf("%d ",i);
        }
        else if(i+1==N)
        {
            sum =sum + a+ b;
                a = b;
                b = sum;
            printf("%d\n",b);
        }
        else
            {
                sum =sum + a+ b;
                a = b;
                b = sum;
                printf("%d ",b);
            }

    }

}
