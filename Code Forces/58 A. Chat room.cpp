#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    string a = "hello";
    int value=0,count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==a[value])
        {
            value++;
        }

    }
    if(value==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

