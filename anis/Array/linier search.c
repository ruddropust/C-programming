#include<stdio.h>
int main()
{
    int number []={45,42,54,452,48,65,32};
    int value,i;
    int position=-1;

    printf("Enter Value: ");
    scanf("%d",&value);
    for(i=0;i<7;i++)
    {
        if(value==number[i])
        {
            position = i+1;
            break;
        }
    }
    if(position==-1)
    {
        printf("\nNot Found\n");
    }
    else
        printf("The Position of the Value(%d) is: %d",value,position);
    return 0;
}
