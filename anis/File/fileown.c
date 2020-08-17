#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num;
    FILE *ptr;
    ptr = fopen("ruddro.txt","w");

    if(ptr == NULL)
    {
        printf("File doesn't exist.");
        exit(1);
    }
    else
    {
        printf("File opened successful\n");

        printf("Enter a number: ");
        scanf("%d",&num);

        fprintf(ptr,"%d",num);
        fclose(ptr);

    }

    return 0;
}
