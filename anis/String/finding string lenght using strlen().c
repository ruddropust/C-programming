#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("Enter a text: ");
    gets(s1);
    int len = strlen(s1);
    printf("Length: %d\n",len);
    return 0;
}
