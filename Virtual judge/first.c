#include<stdio.h>
int main()
{

    int ID;
    scanf("%d",&ID);
    ID = (ID%5)+97;
    if(ID%2==0);
        printf("ID=%c\n\t",ID);
    if(ID%2==1);
        printf("ID=%c\n\t",++ID);

    return 0;
}
