#include<stdio.h>
int main()
{
    int n,reminder,reverse=0,temp;
    scanf("%d",&n);
     temp=n;
    while(temp != 0){
        reminder = temp % 10;
        reverse = reverse*10+ reminder;
        temp = temp/10;
    }

    if(reverse==n){
        printf("This is a  palindrome number\n");

    }
    else{
        printf("This isn't a  palindrome number\n");
    }

    return 0;
}
