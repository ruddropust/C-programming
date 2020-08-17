#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int k,n,w,i,sum=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        sum+= k*i;
    }
    if((sum-n)<0) cout<<"0"<<endl;
    else cout<<sum-n<<endl;
    return 0;
}
