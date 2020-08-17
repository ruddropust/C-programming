#include<iostream>
using namespace std;

int main(void)
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a>b) c=a-b;
        else c=b-a;
        printf("%d\n",c);
    }

}
