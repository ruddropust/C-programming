
#include<stdio.h>
int main()
{
    char s1[100];
    int i;
    printf("Enter a Text: ");
    fgets(s1,sizeof(s1),stdin);
    for(i=0;s1[i]!='\0';i++);

    printf("Total Character: %d\n",i);
    return 0;
}
