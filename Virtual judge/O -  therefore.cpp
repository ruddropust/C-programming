
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    short int n;
    cin>>n;
    int one = n%10;

    if(one==3) cout<<"bon"<<endl;
    else if(one==2 || one==4 || one==5 || one==7 || one==9) cout<<"hon"<<endl;
    else cout<<"pon"<<endl;
}
