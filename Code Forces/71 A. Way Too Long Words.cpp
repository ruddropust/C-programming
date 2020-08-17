#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char s[101];
    int i,n;
    cin>>n;
    while(n!=0)
    {
        cin>>s;
        int l = strlen(s);
        if(l<=10) cout<<s<<endl;
        else cout<<s[0]<<l-2<<s[l-1]<<endl;
        n--;
    }

    return 0;
}
