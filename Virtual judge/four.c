#include<stdio.h>
int main()
{

    int N,M,i;
    scanf("%d",&M);
    /*M = id last 3 digit(comments).*/
    N = M % 9;

    for(i=1 ; i<=(N+10) ; i++)
    {
        printf("Rosy and Nosy! Go back to your home.\n");
    }
    return 0;
}
