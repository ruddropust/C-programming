#include<stdio.h>
#include<string.h>
int main(void)
{
    FILE *file;
     file = fopen("filedemo3.txt","a");
     char name[25];
     int age;


     if(file == NULL)
     {
         printf("File doesn't exist.\n");
         return 1;
     }
     else
     {
         printf("File open successfully.\n");

         printf("Enter your name: ");
         gets(name);
         printf("Enter your age: ");
         scanf("%d",&age);
         fprintf(file,"Name: %s, Age: %d\n",name,age);

         printf("File written successfully.\n");


         fclose(file);
     }
    return 0;
}

