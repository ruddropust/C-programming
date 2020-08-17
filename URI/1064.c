#include<stdio.h>
int main()
{
    int i,count=0;
    float n[6],sum=0;

    for(i=0;i<6;i++)
    {
            scanf("%f",&n[i]);
    }
    for(i=0;i<6;i++)
    {
           if(n[i]>0)
    {
        count++;
        sum = sum + n[i];
    }
    }

    printf("%d valores positivos\n",count);
    printf("%0.1f\n",sum/count);
    return 0;
}
