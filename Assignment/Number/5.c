#include<stdio.h>
int main()
{
    int n;
    printf("Enter a positive number:");
    scanf("%d",&n);
    if(n%2==0){
        printf("The Number is a positive number:");
    }
    else{
        printf("The Number isn't a positive number:");
    }

    return 0;
}

