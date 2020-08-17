#include<stdio.h>
int main()
{

int number,reminder,sum = 0;
scanf("%d",&number);
while(number > 0){
    reminder = number % 10;
    number = number/10;
    sum = sum + reminder;
}
printf("Sum of total digit :%d\n",sum);
return 0;
}
