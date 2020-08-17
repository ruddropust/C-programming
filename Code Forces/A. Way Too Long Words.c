#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,n;
    char x[6000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",x);
        l = strlen(x);
        if(l>10)
        {
            printf("%c",x[0]);
            printf("%d",l-2);
            printf("%c\n",x[l-1]);

        }
        else printf("%s\n",x);
    }
    return 0;
}
