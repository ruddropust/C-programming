#include<stdio.h>
int main()
{
    int i,n[5],count=0,count1=0,count2=0,count3=0;
    for(i=0;i<5;i++)
    {
            scanf("%d",&n[i]);
    }
    for(i=0;i<5;i++)
    {
           if(n[i]%2 == 0)
           {
               count++;
           }
           if(n[i]%2 != 0)
           {
               count1++;
           }
           if(n[i] > 0)
           {
               count2++;
           }
           if(n[i] < 0)
           {
               count3++;
           }

    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",count,count1,count2,count3);

    return 0;
}
