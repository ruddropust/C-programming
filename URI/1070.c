#include<stdio.h>
int main()
{
    int i,j,X;
    scanf("%d",&X);
    if(X%2==0){
         for(i=X+1;i<=X+11;i=i+2)
    {

        printf("%d\n",i);
    }
    }
    else
    {
         for(j=X;j<=X+10;j=j+2)
        {
            printf("%d\n",j);
        }

    }


    return 0;
}
