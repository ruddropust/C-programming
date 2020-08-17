/**Bismillaher Rahmanir Rahim**/
#include<stdio.h>
void main()
{
    int N,sum=0,count=0;

    while(1)
    {
        scanf("%d",&N);
        if(N<0)
        {
            break;
        }
        else
        {
            sum = sum + N;
            count++;
        }
    }
    double avg = (double)sum/(double)count;
    printf("%0.2lf\n",avg);

}
