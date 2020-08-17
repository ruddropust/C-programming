#include <stdio.h>
typedef struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;  //person1 এর মেমোরি এড্রেসে পয়েন্টারকে রেফার করা

    printf("Enter integer: ");
    scanf("%d",&personPtr->age);

    printf("Enter number: ");
    scanf("%f",&(*personPtr).weight);

    printf("Displaying: ");
    printf("%d%f",(*personPtr).age,(*personPtr).weight);

    return 0;
}
