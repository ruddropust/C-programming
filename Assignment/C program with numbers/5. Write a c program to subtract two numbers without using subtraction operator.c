#include<stdio.h>
int main(void)
{
    int number_1,number_2,i;

    printf("Enter First Number: ");
    scanf("%d",&number_1);
    printf("Enter Second Number: ");
    scanf("%d",&number_2);


    while(number_2 != 0)
    {
        number_1--;
        number_2--;
    }
    printf("subtraction = %d\n",number_1);
    return 0;
}
