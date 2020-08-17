#include<stdio.h>
int print_of_somevalue(int last_number)
{
    if(last_number>0)
    {
        printf("%d\n",last_number);
        return print_of_somevalue(last_number-1);
    }
    else return last_number;


}
int main(void)
{
    int number;
    scanf("%d",&number);
    print_of_somevalue(number);
    return 0;
}
