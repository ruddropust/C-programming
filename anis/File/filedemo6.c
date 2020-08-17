#include<stdio.h>
#include<string.h>
int main(void)
{
    FILE *point;
    char ch[60];
    point = fopen("filedemo6.txt","r");

    if( point == NULL)
    {
        printf("File doesn't open.");
    }
    else
    {
        printf("File open successfully.\n");

        while( !feof(point))
        {
            fgets(ch,60,point);
            printf("%s\n",ch);
        }
        fclose(point);
    }
}
