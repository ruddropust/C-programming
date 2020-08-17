
#include<stdio.h>
int add(int a , int b);
int main()
{
    int n1,n2;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    int sum= add(n1,n2);
    printf("%d",sum);
    return 0;
}
int add(int a , int b)
{
    int reasult;
    reasult = a+b;
    return reasult;
}
