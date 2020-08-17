#include<stdio.h>
void printastring(char str[])
{
    printf("String Output: ");
    puts(str);
}
void main()
{
    char str1[50];
    printf("Enter String:");
    fgets(str1,sizeof(str1),stdin);
    printastring(str1);

}
