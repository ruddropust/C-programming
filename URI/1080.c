#include<stdio.h>
int main()
{
    int A[100];
    int i,max,position,value,count=0;

    for(i=0;i<100;i++)
    {
        scanf("%d",&A[i]);
    }
    max = A[0];
    for(i=0;i<100;i++)
    {
        if(max<A[i])
        {
            max = A[i];

        }
    }

    printf("%d\n",max);
    value = max;
    for(i=0;i<100;i++)
    {
        if(value==A[i])
        {
            position = i+1;
            break;

        }
    }

    printf("%d\n",position);

    return 0;
}
