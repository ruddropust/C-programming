
#include<stdio.h>
int main()
{

        int i,X,Y,sum = 0;

        scanf("%d%d",&X,&Y);

        if(X>Y)
        {
            for(i=Y;i<=X;i++)
            {
                if(i%13!=0)
                {
                    sum = sum + i;
                }
            }
        }
        else
        {
            for(i=X;i<=Y;i++)
            {
                if(i%13!=0)
                {
                    sum = sum + i;
                }
            }
        }
        printf("%d\n",sum);

        return 0;
}
