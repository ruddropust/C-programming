#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test,petya,vasya,tonya,count=0;
    cin>>test;
    while(test!=0)
    {
        cin>>petya>>vasya>>tonya;
        if(((petya+vasya+tonya)>=2) && (petya==0 || petya==1) && (vasya==0 || vasya==1) && (tonya==0 || tonya==1))
        {
            count++;
        }
        test--;
    }
        cout<<count<<endl;
}
