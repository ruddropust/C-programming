#include<stdio.h>
int main(void)
{
    int Ball[12];
    int i,j,startpoint=0,endpoint=12,index=0,midpoint,var=0;
    //input Ball
    for(i=0 ; i<12 ; i++)
    {
        scanf("%d",&Ball[i]);
    }
    //process

    for(i=0 ; i<=12 ; i++)
    {
        midpoint= startpoint + endpoint;
        if(startpoint==midpoint) index=1;

        for( j=0; j<=12 ;j++)
        {
            if(Ball[startpoint] != Ball[j])
            {
                var=1;
                break;
            }

        }

        if(var==1)
        {
            if(var<j) startpoint = midpoint;
            else endpoint = midpoint;
        }

    }
    if(index==1)
        printf("Different Ball is Ball[%d]",index);
}
