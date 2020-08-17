#include<stdio.h>
int main()
{
    int edge,volume,sa;
    scanf("%d",&edge);

    sa = 6 * (edge*edge);
    volume = edge * edge * edge;
    printf("Volume  of Cube: %d\n",sa);
    printf("Surface area of Cube: %d\n",volume);
    return 0;
}
