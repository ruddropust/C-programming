#include<stdio.h>
int main(void)
{
    int num_1,num_2,num_3;

    printf("Enter three Number: ");
    scanf("%d%d%d",&num_1,&num_2,&num_3);

    if(num_1-num_2>0 && num_1-num_3>0) printf("Greatest Number = %d\n",num_1);
    else{
        if(num_2-num_3>0) printf("Greatest Number = %d\n",num_2);
        else printf("Greatest Number = %d\n",num_3);
    }
    return 0;
}
