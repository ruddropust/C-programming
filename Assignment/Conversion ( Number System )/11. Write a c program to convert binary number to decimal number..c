#include<stdio.h>
int main()
{
    int bin,i=0,rem,dec=0;
    printf("Enter a Binary number : ");
    scanf("%d",&bin);
    while(bin != 0)
    {
        rem = bin % 10;
        dec = dec +rem * pow(2,i);
        bin/=10;
        i++;

    }
    printf("Decimal number is : %d",dec);
    return 0;
}
