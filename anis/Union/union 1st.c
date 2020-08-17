#include<stdio.h>
//global structure//
struct ruddro
{
    int age;
    float salary;
};
struct ruddro habib,abir;//global variable
int main()
{
    struct ruddro
    {
        int age;
        float salary;
    };
    //struct ruddro habib,abir;//local variable

    habib.age = 19;
    habib.salary = 0.50;
    printf("Habib Details...\n");
    printf("Age : %d\n",habib.age);
    printf("Salary : %0.2f $\n",habib.salary);
    printf("\n\nAbir Details...\n");
    abir.age=45;
    abir.salary = 100.789;
    printf("age : %d\n",abir.age);
    printf("Salary : %0.2f $\n",abir.salary);
    return 0;
}
