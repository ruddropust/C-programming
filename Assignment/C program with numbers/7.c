#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>b) && (a>c)){
        printf("Largest Number:%d",a);
    }
    else if((b>c) && (b>a)){
        printf("Largest Number:%d",b);
    }
    else{
            printf("Largest Number:%d",c);
    }
    return 0;
}
