#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long X,P= 100,step= 0;;
    cin>>X;
    while(P<X)
        {
            P+=P/ 100;
            step++;
        }
            cout<<step<<endl;
    return 0;
}
