#include<iostream>
using namespace std;
int main(void)
{
    int i,X[5],index;
    for(i=0; i<5; i++)
    {
        cin>>X[i];
    }
    for(i=0; i<5; i++)
    {
        if(X[i]==0) index = i;
    }
    cout<<index+1<<endl;
}
