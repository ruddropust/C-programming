#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="My name is";
    char str2[]="Ruddro";
    //printf("Enter a text: ");
    //fgets(str,sizeof(str),stdin);
    //printf("Enter a text: ");
//fgets(str2,sizeof(str2),stdin);

    strcat(str,str2);


    printf("Concatenate two strings is :%s\n",str);


    getch();

}
