#include<stdio.h>
void swap(int a,int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
    printf("\n\n............After Swaping.............\n");
    printf("Number - 1 : %d\n",a);
    printf("Number - 2 : %d\n",b);

}
int main(void)
{
    int num_1,num_2;
    printf("............Before Swaping...........\n");
    printf("Enter Number - 1: ");
    scanf("%d",&num_1);
    printf("Enter Number - 2: ");
    scanf("%d",&num_2);

    swap(num_1,num_2);
    return 0;
}
