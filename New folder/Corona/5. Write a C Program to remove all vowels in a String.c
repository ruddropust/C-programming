#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,j;
    printf("Enter String:");
    fgets(str,sizeof(str),stdin);

    for(i=0,j=0;str[i] != '\0'; i++)
    {
        ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            continue;
        }
        else
        {
            str[j]=ch;
            j++;
        }
    }
    str[j]='\0';
    printf("String after deleting vowels:%s\n",str);
    return 0;
}
