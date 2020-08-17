#include<stdio.h>
//global structure//
struct ruddro
{
    int age;
    float salary;
};
int main()
{
    struct ruddro habib={19,2587.56};//local variable
    struct ruddro abir,mehedi;
    abir.age = 12;
    abir.salary = 4589.25;

    mehedi = habib;

    printf("\n\nHabib details...\n");
    printf("Age :%4d\n",habib.age);
    printf("salary :  %0.2f $\n",habib.salary);



    printf("\n\nAbir details...\n");
    printf("Age :%4d\n",abir.age);
    printf("salary :  %0.2f $\n",abir.salary);


    printf("\n\nMehedi details...\n");
    printf("Age :%4d\n",mehedi.age);
    printf("salary :  %0.2f $\n",mehedi.salary);
    return 0;
}

