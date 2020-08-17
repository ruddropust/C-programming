#include<stdio.h>
int main()
{
    char str[1000],ch;

     int i,count=0;

    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);

    printf("Enter a Charecter which you found : ");
    scanf("%c",&ch);

    for(i=0;str[i] != '\0';i++)
    {
        if(ch==str[i])
        count++;
    }
    printf("\n\nFrequency of %c = %d\n", ch, count);

    getch();
}
