#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *file;
    char name[20];
    int num,age,phone,i;
     file = fopen("filedemo7.txt","a");

     if(file == NULL)
     {
         printf("File doesn't exist.\n");
         exit(1);
     }
     else
     {
         printf("File open successfully.\n");
         printf("Enter number of student: ");
         scanf("%d",&num);

         for(i=1;i<=num;i++)
         {
             printf("\nEnter Student - %d Information\n",i);
             printf("Enter student name: ");
             scanf("%s",&name);

             printf("Enter student age: ");
             scanf("%d",&age);
             printf("Enter student Number: ");
             scanf("%d",&phone);

              fprintf(file,"\n%s\t\t%d\t\t%d\n",name,age,phone);
         }
     }
     fclose(file);
}
