#include<stdio.h>
int main()
{
    char ch;
    while(scanf("%c",&ch)==1)
    {
        if(ch != '\n')
            printf("%c",ch-7);
        else printf("\n");
    }
    return 0;
}
