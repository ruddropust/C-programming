#include<stdio.h>
void main()
{
    int x;
    scanf("%d",&x);

    int *pointer = &x;

    printf("Value : %d\n",x);//value of x//
    printf("Address : %d\n",&x);//address of x//
    printf("Address : %u\n",&x);//unsigned number use because memory address all time positive//
    printf("Address : %x\n",&x);//address show hexadecimal //
    printf("Address : %d\n",pointer);//use pointer//
    printf("Address : %d\n",*pointer);//value of pointer//
    printf("Address : %d\n",&pointer);//address of pointer//


}
