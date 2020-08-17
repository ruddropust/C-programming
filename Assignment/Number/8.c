#include<stdio.h>
int main()
{
    int num,first=0,second=1,fibo,i;
    printf("Enter the last number of fibonacci series:");
    scanf("%d",&num);
    for(i=0;i<=num;i++){
        if(i<=1){
            fibo = i;
        }
        else{
            fibo = first + second;
            first = second;
            second = fibo;
        }
printf("%d\t",fibo);
    }

    return 0;
}
