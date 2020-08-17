/**Bismillahir Rahmanir Rahim.**/

#include <stdio.h>
int main()
{
    int i,N;
    while(1)
    {
        scanf("%d",&N);
        if(N==0)
        {
            break;
        }
        else
        {
            for(i=1;i<=N;i++)
            {
                if(N==i)
                {
                    printf("%d\n",i);
                }
                else
                    {
                        printf("%d ",i);
                    }
            }
        }

    }
    return 0;
}
