#include<stdio.h>
int main()
{
    char str1[100];
    printf("Enter a text: ");
    gets(str1);
    printf("String = %s\n",str1);
    strrev(str1);


    printf("String = %s\n",str1);

    strrev(str1);

    printf("String = %s\n",str1);
    return 0;
}
