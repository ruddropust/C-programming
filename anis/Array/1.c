//write a programe use array
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("How many Number you use:");
    scanf("%d",&n);

    int num[n];


    printf("Enter %d Number: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    for(i=0;i<n;i++){
     sum = sum + num[i];
    }

   printf("%d\n",sum);

    float avg=(float)sum/i;
    printf("%f\n",avg);
    return 0;
}

