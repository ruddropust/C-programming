#include<stdio.h>
int main()
{
    int i,n[3],max,temp;
    int p;

    for(i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    max = n[0];
    for(i=1;i<3;i++)
    {
        if(max<n[i])
        {
            temp = max;
            max=n[i];
            n[i]=temp;
        }

    }
    for(i=0;i<3;i++)
    {
        if(max == n[i])
        {
            p = i+1;
            break;
        }
    }
    printf("%d\n%d\n",max,p);



    return 0;
}

