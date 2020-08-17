
#include<bits/stdc++.h>

using namespace std;
int main(void)
{
    short int K,A,B,count=0;
    cin>>K;
    cin>>A>>B;

    for(int i=A;i<=B;i++)
    {
        if(i%K==0)
        {
            count=1;
            break;
        }
    }


    if(count==1) cout<<"OK"<<endl;
    else cout<<"NG"<<endl;

}
