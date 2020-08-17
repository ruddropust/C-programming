#include<stdio.h>
#include<string.h>
int main(void)
{
    FILE *file;
     file = fopen("filedemo2.txt","w");
     char name[20];
     int i;


     if(file == NULL)
     {
         printf("File doesn't exist.\n");
         return 1;
     }
     else
     {
         printf("File open successfully.\n");

         printf("Enter your name: ");
         fgets(name,sizeof(name),stdin);


         fputs(name,file);


         printf("File written successfully.\n");


         fclose(file);
     }
    return 0;
}
