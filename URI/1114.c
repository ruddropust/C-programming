#include<stdio.h>
int main()
{

        int password=2002,read;
      Ruddro:
        scanf("%d",&read);

        if(read==password)
        {
            printf("Acesso Permitido\n");
        }
        else
        {
            printf("Senha Invalida\n");
            goto Ruddro;
        }
}
