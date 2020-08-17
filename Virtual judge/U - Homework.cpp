#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int N,M,A[10000],sum=0;
    cin>>N>>M;
    for(int i=0; i<M ; i++)
    {
        cin>>A[i];
        sum = sum + A[i];
    }
    if(sum > N)
    {
        sum = -1;
        cout<<sum<<endl;
    }
    else cout<<N-sum<<endl;
}
