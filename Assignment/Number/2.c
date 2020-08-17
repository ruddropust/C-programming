#include<stdio.h>
int main()
{
    int sum=0,n,temp;
    scanf("%d",&n);
    while(n!=0){
            temp = n%10;
            sum = sum + temp*temp*temp;
            n = n/10;

    }
    if(n==sum){
        printf("The given number is a Armstrong number\n");
    }
    else{
        printf("The given number isn't a Armstrong number\n");
    }

    return 0;
}
