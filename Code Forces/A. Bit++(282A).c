//Bismillaher Rahmanir Rahim
//A. Bit++

#include<stdio.h>
#include<string.h>
int main(void)
{
    int x=0,i,test_case;
    char s[4];
    scanf("%d",&test_case);
    for(i=1 ; i<=test_case ; i++)
    {
        scanf("%s",&s);
        if(s[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }

    }
    printf("%d",x);
    return 0;
}

