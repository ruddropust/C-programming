#include<stdio.h>
#include<conio.h>
int main()
{
    int n[100];
    int i,j,k,x;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<x;i++)
    {
      for(j=0,k=0;j<x;j++)
    {

        if(n[i]==n[j])
        {
            continue;
        }
        else
        {
            printf("%d\n",n[j]);
        }

    }
    k++;
    }



    getch();
}
