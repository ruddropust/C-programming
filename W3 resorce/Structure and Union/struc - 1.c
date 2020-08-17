#include<stdio.h>

struct person
{
    char Name[50];
    int age;
    float height;
}ruddro,habib;
int main()
{
    ruddro.age = 15;
    printf("Age : %d\n",ruddro.age);
    ruddro.height = 5.10;
    printf("Height : %0.2f\"\n",ruddro.height);
    habib.age = 19;
    printf("Age : %d\n",habib.age);
    habib.height = 5.11;
    printf("Height : %0.2f\"\n",habib.height);
    return 0;
}
