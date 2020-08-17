#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *file;
     file = fopen("filedemo7.txt","w");
     if(file == NULL)
     {
         printf("File doesn't exist.\n");
         exit(1);
     }
     else
     {
         printf("File open successfully.\n");
     }
     fclose(file);
}
