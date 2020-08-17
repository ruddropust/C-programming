#include<iostream>
using namespace std;
int main()
{
    int n,k,a[50],count=0,i;
    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0) count++;
    }
    cout<<count<<endl;
    return 0;
}

