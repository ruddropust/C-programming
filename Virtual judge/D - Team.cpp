#include<iostream>
using namespace std;

int main(void)
{
    int input,a,b,c,i,count=0;
    scanf("%d",&input);
    for(i=1; i<=input ; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a+b+c)>=2)
        {
            count++;
        }
        else continue;
    }
    printf("%d",count);
}
