#include<stdio.h>
int main()
{
    char s1[30],s2[30];
    printf("Enter text:");
    gets(s1);
    int i=0,j,count=0;
    while(s1[i] != '\0')
    {
        i++;
        count++;
    }
    printf("\n\nLength: %d\n",count);
    for(j=0,i=count-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';

    printf("\n\nString-1: %s\n\n",s1);
    printf("String-2: %s\n\n",s2);

    int d = strcmp(s1,s2);
    if(d==0)
    {
        printf("%s and %s is a Palindrom Number\n\n",s1,s2);
    }
    else
        printf("%s and %s isn't a Palindrom Number\n",s1,s2);
    getch();
}
