#include<stdio.h>
int main(void)
{
    int m=29;
    int *ab;

    printf("Address of m : %p\n",&m);
    printf("value of m : %i\n",m);
    printf("Now ab is assigned with the address of m.\n");
    ab = &m;
    printf("Address of pointer ab : %p\n",ab);
    printf("Content  of pointer ab : %i\n",*ab);

    printf("The value of m assigned to 34 now.\n");
    m = 34;
    printf("Address of pointer ab : %p\n",ab);
    printf("Content  of pointer ab : %i\n",*ab);

    printf("The pointer variable ab is assigned with the value 7 now.\n");
    *ab = 7;
    printf("Address of m : %p\n",ab);
    printf("value of m : %i\n",*ab);
}
