#include<stdio.h>
int main()
{
    int n1,n2,num1,num2,reminder,gcd,lcd;
    scanf("%d%d",&n1,&n2);
    num1 = n1;
    num2 = n2;

    while(n2!=0){
            reminder = n1%n2;
            n1=n2;
            n2=reminder;

    }
    gcd = n1;
    lcd = (num1*num2)/gcd;
    printf("LCD: %d\n",lcd);
    printf("GCD: %d\n",gcd);
    return 0;
}
