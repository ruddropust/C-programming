//nested structure
#include<stdio.h>
struct student_info
{
    int roll;
    char name[20];
};
struct student_bio
{
    struct student_info info1; //nested
    int father_income;
    int age;
};
int main()
{
    struct student_bio info2;
    info2.info1.roll = 200124;  //nested structure variable declare
    printf("Roll : %d\n",info2.info1.roll);
    return 0;
}
