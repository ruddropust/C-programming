#include<stdio.h>
int main()
{
    int n[8]={1,5,3,4,8,7,2,6};
    int i,j,temp;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8-1;j++)
        {
            if(n[j]>n[j+1])
            {
                temp = n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }
        }
    }
    for(i=0;i<8;i++)
        {
          printf("%d\n",n[i]);
        }

    return 0;
}
