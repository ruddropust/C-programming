#include<stdio.h>
int main()
{
    char lower,Upper;
    printf("Enter a lowercase:");
    scanf("%c",&lower);

    Upper=toupper(lower);

    printf("Your Upper Case is: %c",Upper);
    return 0;
}
