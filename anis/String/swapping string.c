#include<stdio.h>
int main()
{
    char s1[30],s2[30],temp[30];
    printf("..........Before Swapping...........\n");
    printf("Enter text String-1: ");
    gets(s1);
    printf("Enter text String-2: ");
    gets(s2);

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("\n\n..........After Swapping...........\n");
    printf("String-1: %s\n",s1);
    printf("String-2: %s\n",s2);

    getch();
}
