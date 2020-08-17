#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int N,sum=0,sum1=0,sum2=0,i;
    cin>>N;
    int A[101][101];
    for(i=0;i<N;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
        sum+=A[i][0];
        sum1+=A[i][1];
        sum+=A[i][2];

    }
    if(sum==0 && sum1==0 && sum2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
