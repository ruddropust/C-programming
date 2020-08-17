#include<stdio.h>
int main(void)
{
    FILE *file;
    file = fopen("start ruddro.txt","w");

    if(file == NULL)
    {
        printf("File doesn't exist.");
    }
    else printf("File open successfully.");
    getch();
}
