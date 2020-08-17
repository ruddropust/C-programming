#include<stdio.h>

int fiboOfNthItem(int n) {

    if(n==1) return 0;
    if(n==2) return 1;

    return fiboOfNthItem(n-1) + fiboOfNthItem(n-2);
}

void main()
{
    int num,i;
    scanf("%d",&num);


    for(i=1;i<num;i++)
    {
        printf("%d\n",fiboOfNthItem(i));
    }
    printf("\n");
}
