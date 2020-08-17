#include<stdio.h>
void main()
{
    char s1[100],s2[100];
    printf("..........Before Converting...........\n");
    printf("Enter text String-1: ");
    gets(s1);
    printf("Enter text String-2: ");
    gets(s2);

    strupr(s1);
    strlwr(s2);

    printf("\n\n..........After Converting...........\n");
    printf("String-1: %s\n",s1);
    printf("String-2: %s\n",s2);


}
