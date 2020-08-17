#include<stdio.h>
int main()
{
    int dec,rem,oct=0,i=1;
    printf("Enter a decimal Value: ");
    scanf("%d",&dec);
    while(dec != 0)
    {
        rem = dec % 8;
        oct += rem * i;
        dec/=8;
        i*=10;
    }
    printf("%d",oct);
    return 0;
}
