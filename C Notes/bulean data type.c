#include<stdio.h>
//#include<stdbool.h>
#define bool int
#define true 1
#define false 0
int main(void)
{
    bool x = true;
    bool y = false;

    if(x)
    {
        puts("Bool x is Working!\n\n");
    }
    if(!y)
        puts("Bool y is working!\n\n");

}
