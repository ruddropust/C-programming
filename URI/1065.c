#include<stdio.h>
int main()
{
    int i,count=0;
    int X[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&X[i]);
    }
    for(i=0;i<5;i++)
    {
       if(X[i]%2 == 0)
       {
           count++;
       }
    }
    printf("%d valores pares\n",count);
    return 0;
}
