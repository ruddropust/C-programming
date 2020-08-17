#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int num,sum=0;
    cin>>num;

    if(num%2==0){
        sum=num/2;
    }
    else{
        sum=-((num/2)+1);
    }

    cout<<sum<<endl;
}
