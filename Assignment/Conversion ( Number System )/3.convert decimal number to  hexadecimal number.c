#include<stdio.h>
int main()
{
    int dec,rem,hd,i=0,k=0,m;
    printf("Enter a decimal Value: ");
    scanf("%d",&dec);
    while(dec != 0)
    {
        rem = dec % 16;
        if(rem > 9) rem+=55;
        else rem+=48;
        k = k*100 + rem;
        dec /= 16;
    }
    for(m=k;m>0;m/=100)
        {
            hd = m % 100;
            printf("%c",hd);
        }
        printf("\n\n");
    return 0;
}

