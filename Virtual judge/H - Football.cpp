#include<iostream>
#include<string>
using namespace std;

int main()
{
    string player;
    int i,count1=0,count2=0,count3=0;

    cin>>player;

    for(i=0;i<player.size();i++)
    {
        if(player[i]=='1')
        {
            count1++;
            count2=0;
        }
        else
        {
            count2++;
            count1=0;
        }
        if(count1==7 || count2==7)
        {
            count3=1;
        }

    }
    if(count3==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
