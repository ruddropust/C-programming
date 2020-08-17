#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string name;
    int count=0;
    cin>>name;
    sort(name.begin(),name.end());
    for(int i=0;i<name.size();i++)
    {
        if(name[i]==name[i+1])
        {
            count++;
        }


    }
    if((name.size()-count)%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;

}
