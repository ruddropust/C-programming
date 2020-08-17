#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=2;i<n;i++){

        if(n%i==0){
            count++;
            break;
        }
        }
    if(count==0){
           printf("Given number is prime ");
    }
        else{
            printf("Given number isn't prime");
        }
    return 0;
}
