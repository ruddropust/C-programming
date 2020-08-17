#include <stdio.h>
int main() {
    char s1[100],s2[100];
    int i, j;

    printf("Enter First String:");
    fgets(s1,sizeof(s1),stdin);

    printf("Enter second String:");
    fgets(s2,sizeof(s2),stdin);

    for (i = 0; s1[i] != '\0'; i++);

    for (j = 0; s2[j] != '\0'; j++,i++)
    {
        s1[i] = s2[j];
    }
    s1[i] = '\0';

    printf("After concatenation: ");
    puts(s1);

    return 0;
}
