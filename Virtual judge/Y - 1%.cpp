#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int A[4000],k;
    A[0]=100;
    cin>>k;
    for(int i=1;i<4000;i++)
    {
        A[i] = A[i-1] + (0.01 * A[i-1]);
        if(A[i]>=k)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
