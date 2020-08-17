#include<stdio.h>
#include<conio.h>
int add(int, int);
main() {
 int a,b,sum;
 printf("enter two numbers:");
 scanf("%d %d",&a,&b);
 sum=add(a,b);
 printf("%d\n",sum);

}

int add(int a,int b)
{
 int sum,carry;
if (b == 0)
return a;
else
sum = a^b;
carry = (a&b) << 1;
return add(sum,carry);
 }
