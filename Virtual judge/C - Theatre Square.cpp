#include<iostream>
using namespace std;

int main(void)
{
    long long int n,m,block_1,block_2,a;
    scanf("%lld%lld%lld",&n,&m,&a);


    if(n%a==0) block_1 = (n/a);
    else block_1 = ((n/a)+1);

    if(m%a==0) block_2 = (m/a);
    else block_2 = (m/a)+1;

    printf("%lld",block_2*block_1);

}
