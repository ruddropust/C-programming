#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(void)
{
    char ch[11],chl[12];
    int i,count=0;
    cin>>ch>>chl;
    int length1 = strlen(ch);
    int length2 = strlen(chl);

    for(i=0;i<length1;i++)
    {
        if(ch[i]!=chl[i])
        {
            count = 2;
            break;
        }
        else count = 1;

    }



    if(count==1 && (length1==length2-1)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}
