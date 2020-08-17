#include<stdio.h>
int main()
{
    int i,j,count;
    int A[]={1,2,3,4,5,6,7,8,9,1,1,2,4,2,3};
    for(i=1;i<10;i++)
    {
        for(j=0,count=0;j<15;j++)
        {
            if(i==A[j])
            {
                ++count;

            }
        }
       printf("%d = %d\n",i,count);

    }
    return 0;
}
