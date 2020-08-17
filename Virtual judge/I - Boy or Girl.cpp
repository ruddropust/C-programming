//Bismillaher Rahmanir Rahim//
//Habibul Islam//
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int len,i,count=1;
    char s[101];
    scanf("%s",&s);
    len=strlen(s);
    sort(s,s+len);
    for(i=0 ; i<len-1 ; i++)
    {
        if(s[i] != s[i+1])
        {
            count++;
        }
    }
    if(count%2==1)cout<<"IGNORE HIM!"<<endl;

    else cout<<"CHAT WITH HER!"<<endl;

}
