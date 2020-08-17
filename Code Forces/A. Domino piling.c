//Bismillaher Rahmanir Rahim
//A - Domino piling


#include<stdio.h>
int main(void)
{
    int M,N,rect_area;
    int domino_area = 2;
    scanf("%d%d",&M,&N);
    rect_area = M * N;

    printf("%d",rect_area/domino_area);

    return 0;
}
