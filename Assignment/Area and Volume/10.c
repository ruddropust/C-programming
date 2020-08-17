#include<stdio.h>
int main()
{
    int length,width,height;
    double volume,sa;
    scanf("%d%d%d",&length,&width,&height);

    volume = length * width * height;
    sa = 2 * ((length*width) + (length*height) + (width*height));

    printf("Volume of a cuboid: %0.2lf\nSurface area cuboid:%0.2lf\n",volume,sa);

    return 0;
}
