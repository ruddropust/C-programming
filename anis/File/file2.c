#include<stdio.h>
#include<string.h>
int main(void)
{
    FILE *file;
    char name[20]=" \nClass: Hon's";
    int length = strlen(name);
    int i;
    file = fopen("second.txt","a");

    if(file == NULL)
    {
        printf("File doesn't exist.");
    }
    else
    {
        printf("File open successfully.\n");
        for(i=0 ; i<length ; i++)
        {
            fputc(name[i],file);
        }
        printf("File written successfully\n");
        fclose(file);


    }
    getch();
}
