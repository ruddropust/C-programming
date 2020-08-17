#include<stdio.h>
int main()
{
    char str[100];
    int i,count;

    printf("Enter a text: ");
    fgets(str,sizeof(str),stdin);

    i=0;
    count=0;
    while(str[i] != '\0')
    {
        i++;
        count++;
    }
    printf("Total Character of the text: %d",count);

    getch();
}
