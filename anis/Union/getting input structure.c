#include<stdio.h>
//global structure//
struct ruddro
{
    int age;
    float salary;
};
int main()
{
    struct ruddro habib,abir;//local variable
    //habib details
    printf("Enter Habib details...\n");
    printf("Enter age: ");
    scanf("%d",&habib.age);
    printf("Enter salary : ");
    scanf("%f",&habib.salary);

    printf("\n\nHabib details...\n");
    printf("Age :%4d\n",habib.age);
    printf("salary :  %0.2f $\n",habib.salary);

    //abir details
    printf("\n\nEnter Abir details...\n");
    printf("Enter age: ");
    scanf("%d",&abir.age);
    printf("Enter salary : ");
    scanf("%f",&abir.salary);

    printf("\n\nAbir details...\n");
    printf("Age :%4d\n",abir.age);
    printf("salary :  %0.2f $\n",abir.salary);
    return 0;
}
