#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    short int A,B,C,D;
    cin>>A>>B>>C>>D;
    while(A!=0 || C!=0)
    {

        C = C-B;
        A = A-D;
        if(C<=0)
        {
            cout<<"Yes"<<endl;
            break;
        }
        else if(A<=0)
        {
            cout<<"No"<<endl;
            break;
        }
    }

    return 0;
}
