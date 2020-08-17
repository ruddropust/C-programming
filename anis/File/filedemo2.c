#include<stdio.h>
#include<string.h>
int main(void)
{
    FILE *file;
    char name[20]="Habibul Islam Ruddro";

    int length = strlen(name);
    int i;
    file = fopen("filedemo1.txt","w");


    if(file == NULL)
    {
        printf("File doesn't exist.");
        return 0;
    }
    else
    {
        printf("File open successfully.\n");

        for(i=0;i<length;i++)
        {
            fprintf(file,"%c",name[i]);
        }
        fclose(file);
    }
    return 0;
}
