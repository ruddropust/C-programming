#include<stdio.h>
void main()
{
    char string[100];
    printf("Enter a string: ");
    fgets(string,sizeof(string),stdin);

    strrev(string);

    printf("Reverse Text: %s\n",string);
}
