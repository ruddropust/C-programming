#include<stdio.h>
int main()
{
    int i,a,t,total,C=0,R=0,S=0;
    char ch,p='%';
    double x,y,z;
    scanf("%d",&t);
    for(i=0 ; i<t ; i++)
    {
        scanf("%d %c",&a,&ch);
        if(ch=='S')
        {S = S+a;}
        else if(ch=='R')
        {R = R+a;}
        else if(ch=='C')
        {C = C+a;}

    }
    total = C+S+R;
    x = (C*100.00)/total;
    y = (S*100.00)/total;
    z = (R*100.00)/total;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %0.2lf %c\n",x,p);
    printf("Percentual de ratos: %0.2lf %c\n",z,p);
    printf("Total de sapos: %0.2lf %c\n",y,p);


    return 0;
}
