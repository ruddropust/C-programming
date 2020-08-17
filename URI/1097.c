#include<stdio.h>
int main()
{
    float i,j,a=1,c;
    int x;
    for(i=0;i<2;i=i+0.2)
    {
            for(c=1,j=a;c<4;j++,c++)
            {
                if(i==1 || i ==2 || j==1 || j==2 || j==3 || j==4 || j==5)
                {
                    printf("I=%d J=%d\n",(int)i,(int)j);
                }
                else
                    printf("I=%0.1f J=%0.1f\n",i,j);
            }
        a=a+0.2;
    }
    for(x=3; x<=5; x++)
        printf("I=2 J=%d\n",x);
return 0;
}
