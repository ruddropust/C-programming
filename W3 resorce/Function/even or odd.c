#include<stdio.h>
int count=0;
EvenOrOdd(int num);

int main()
{
    int n,res;
    printf("Enter a number: ");
    scanf("%d",&n);

    res = EvenOrOdd(n);
    if(res==0)
    {
        printf("Odd\n");
    }
    else
        printf("Even\n");

        return 0;

}
int EvenOrOdd(int num)
{

    if(num%2==0)
    {
        count++;
    }
    else
    {
        count=0;
    }


return count;
}
