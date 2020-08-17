#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    char ch;
    cin>>ch;
    if(ch>=A && ch<=Z)
    {
        cout<<"A"<<endl;
        cout<<ch<<" is uppercase, so we should print A."<<endl;
    }
    else
        {
        cout<<"a"<<endl;
        cout<<ch<<" is lowercase, so we should print a."<<endl;
    }

}
