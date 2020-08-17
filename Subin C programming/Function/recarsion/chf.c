#include<stdio.h>
int factorial(int num)
{
    if(num == 0)
    {
        return 1;
    }
    else
        return num * factorial(num-1);
}


void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("%d! factorial is : %d\n",num,factorial(num));

}
