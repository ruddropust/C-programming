#include<stdio.h>
int main()
{
    int i=1,n=100;

    print:
        printf("%d\n",i);
        i++;
        if(i<=n)
            goto print;
    return 0;
}
