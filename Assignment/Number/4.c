 #include<stdio.h>
int main()
{
    int i,temp,n,reminder,fact,sum =0;
    scanf("%d",&n);
    temp=n;

    while(temp!=0){
     reminder = temp%10;
     fact=1;
     for(i=1;i<=reminder;i++)
        {
        fact = fact*i;
        }
        sum = sum + fact;
        temp = temp/10;
    }
     if(sum == n)
        printf("%d Number is a strong Number",n);

    else
        printf("%d Number isn't a strong Number",n);

    return 0;
}

