#include<stdio.h>
int main()
{
    int dec,rem,bin=0,i=1;
    printf("Enter a decimal Value: ");
    scanf("%d",&dec);
    while(dec != 0)
    {
        rem = dec % 2;
        bin += rem * i;
        dec/=2;
        i*=10;
    }
    printf("%d",bin);
    return 0;
}
