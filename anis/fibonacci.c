#include<stdio.h>
int main()
{
    int n,count=0,first=0,second=1,fibo;
    printf("Enter a Number:");
    scanf("%d",&n);

    while(n>count){
            if(count<=1){
                fibo=count;
            }
            else{
                fibo=first+second;
                first=second;
                second=fibo;
            }
printf("%d\n",fibo);
count++;
    }

    return 0;
}
