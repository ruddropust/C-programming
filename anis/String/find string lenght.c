#include<stdio.h>
int main()
{
    char s1[100];
    int i,count;
    printf("Enter a Text: ");
    fgets(s1,sizeof(s1),stdin);
    for(i=0,count=0;s1[i]!='\0';count++,i++)
    {
        printf("Character %d :%c\n",i+1,s1[i]);
    }
    printf("\nTotal Character: %d\n",count);
    return 0;
}

