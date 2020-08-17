//file getc use
#include<stdio.h>
#include<string.h>
int main(void)
{
    FILE *filed;

    filed = fopen("filedemo5.txt","r");

    if(filed == NULL)
    {
        printf("File doesn't exist !");
        return 1;
    }
    else
    {
        printf("File is open.\n");

        while( !feof(filed))
        {
            char ch;
            ch = fgetc(filed);

            printf("%c",ch);
        }
        fclose(filed);
    }
    return 0;
}
