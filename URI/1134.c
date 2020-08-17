#include<stdio.h>
int main()
{
    int value,a=0,b=0,c=0;


        while(1)
        {
            scanf("%d",&value);
            if(value==4)
                {break;}
            else
            {
                if(value==1)a++;
                else if(value==2)b++;
                else if(value==3)c++;
                else continue;

            }
        }
        printf("MUITO OBRIGADO\n");

        printf("Alcool: %d\n",a);
        printf("Gasolina: %d\n",b);
        printf("Diesel: %d\n",c);

    return 0;
}
