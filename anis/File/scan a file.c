#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch[20];
   FILE *fptr;

   if ((fptr = fopen("second.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%c", &ch);

   printf("%c", ch);
   fclose(fptr);

   return 0;
}
