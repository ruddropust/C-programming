#include<stdio.h>
#include<string.h>
int main(void)
{
    FILE *file;
    char text[5000];
    file = fopen("test.txt","w");

    if(file == NULL)
    {
        printf("File doesn't exist.");
    }
    else
    {
        printf("File open successfully.\n");
        printf("Enter text : ");
        fgets(text,sizeof(text),stdin);

        fputs(text,file);
        printf("\nFile return successfully.\n");
        fclose(file);


    }
    getch();
}
