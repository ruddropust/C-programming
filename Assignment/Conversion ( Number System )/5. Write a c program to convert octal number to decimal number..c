#include<stdio.h>
int main()
{
    int oct,i=0,j=1,rem,dec=0;
    printf("Enter a Octal number : ");
    scanf("%d",&oct);
    while(oct != 0)
    {
        rem = oct % 10;
        dec = dec +rem * pow(8,i);
        oct/=10;
        i++;

    }
    printf("Decimal number is : %d",dec);
    return 0;
}
