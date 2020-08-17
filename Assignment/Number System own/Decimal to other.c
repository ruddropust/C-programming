#include<stdio.h>

void dectobin(int number);
void decimaltooctal(int number);
void decimaltohexadecimal(int number);

void main()
{
    int num,press;
    printf("Enter  Decimal Number : ");
    scanf("%d",&num);
    printf("Press \"1\" for Decimal \"2\" for Octal \"3\" for Hexa-decimal : ");
    scanf("%d",&press);
    if(press==1)dectobin(num);
    else if(press==2) decimaltooctal(num);
    else if(press==3) decimaltohexadecimal(num);


}
void dectobin(int number)
{

    int position = 1,binary = 0;
    int var = number;
    while(number != 0)
    {
        binary += ((number % 2) * position);
        number /=  2;

        position *= 10;

    }
    printf("The Binary Value of %d(Decimal) is : %d\n\n",var,binary);
}
void decimaltooctal(int number)
{

    int position = 1,octal = 0;
    int var = number;
    while(number != 0)
    {
        octal += ((number % 8) * position);
        number /=  8;

        position *= 10;

    }
    printf("The Octal Value of %d(Decimal) is : %d\n\n",var,octal);
}
void decimaltohexadecimal(int number)
{

    int position = 1,hd[100],rem,i=1,j;
    int var = number;
    while(number != 0)
    {
        rem += number % 16;
        if(rem<10)
        {
            rem += 48;
        }
        else
        {
            rem += 55;
        }
        hd[i++]=rem;
        number/=16;


    }
    printf("The Hexa - Decimal Value of %d(Decimal) is : ",var);
    for (j = i -1 ; j>0 ; j--) printf("%c",hd[j]);

}

