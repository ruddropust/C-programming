#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char s[51];
    int test,count=0;
    cin>>test;
    cin>>s;
    for(int i=0;i<test;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
