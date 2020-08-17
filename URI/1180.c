#include<stdio.h>
int main()
{
    int i,N,min,count;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    min = A[0];
    for(i=1;i<N;i++)
    {
        if(min>A[i])
        {
            min = A[i];
            count=i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n",min,count);

    return 0;

}
