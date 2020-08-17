#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,vowel,con,digit,word,other;

    printf("Enter a text: ");
    gets(str);

    i=vowel=con=digit=word=other=0;

    while(str[i] != '\0')
    {
        ch=str[i];
        if(ch== 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u' || ch== 'A' || ch== 'E' || ch== 'I' || ch== 'O' || ch== 'U')

        {
            vowel++;
        }
        else if((ch>= 'a' && ch<='z') || (ch>='A' && ch<='Z') )
        {
            con++;
        }
        else if(ch>='0' && ch<='9')
        {
            digit++;
        }
        else if(ch==' ')
        {
            word++;
        }
        else
        {
            other++;
        }

        i++;
    }
    printf("Vowel: %d\n",vowel);
    printf("Consonent: %d\n",con);
    printf("Digit: %d\n",digit);
    printf("Word: %d\n",word);
    printf("Other: %d\n",other);
    return 0;
}
