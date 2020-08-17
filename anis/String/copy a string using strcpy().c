#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter text: ");
    gets(s1);

    strcpy(s2,s1);
    printf("\n\nS1: %s\n\n",s1);
    printf("S2 : %s",s2);
    return 0;
}
