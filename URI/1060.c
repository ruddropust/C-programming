#include<stdio.h>
int main()
{
    int i,count=0;
    double number[6];

    for(i=0;i<6;i++)
    {
        scanf("%lf",&number[i]);
    }
    for(i=0;i<6;i++)
    {
        if(number[i]>0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n",count);

    return 0;
}
