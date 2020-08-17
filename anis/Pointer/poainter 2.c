#include<stdio.h>
void main()
{
    int x=15,y=45,z=97;

    int *pointer;

    pointer = &x;
    printf("x = %d\n",*pointer);

    pointer = &y;
    printf("y = %d\n",*pointer);

    pointer = &z;
    printf("z = %d\n",*pointer);




}
