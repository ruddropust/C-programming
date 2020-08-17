
//Reverse a sentence using recursion//

#include <stdio.h>
void reverseaSentence();
int main()
{
    printf("Enter a sentence: ");
    reverseaSentence();
    return 0;
}
void reverseaSentence()
{
    char ch;
    scanf("%c", &ch);
    if (ch != '\n')
    {
        reverseaSentence();
        printf("%c", ch);
    }
}


