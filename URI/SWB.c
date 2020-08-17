#include<stdio.h>
#include<conio.h>

void main()
{
    int sal,bonus;
    clrscr();
    printf("\nENTER THE YOUR SALARY :- ");
    scanf("%d",&sal);
    bonus = sal * 0.1;
    printf("\nYOUR BONUS IS :- %d",bonus);
    getch();

}
