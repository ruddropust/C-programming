#include<stdio.h>
int main(void)
{
    int num;
    while(scanf("%d",&num)==1)
    {
        if(num==0) printf("vai ter copa!\n");
        else printf("vai ter duas!\n");
    }
    return 0;
}
