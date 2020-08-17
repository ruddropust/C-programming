#include<stdio.h>
int main()
{
    int number,reminder,reverse=0;
    scanf("%d",&number);
    while(number != 0){
        reminder = number%10;
        reverse = (reverse*10) + reminder;
        number = number/10;

    }
printf("%d",reverse);
return 0;
}
