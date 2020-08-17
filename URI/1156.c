/**Bismillahir Rahmanir Rahim.**/

#include <stdio.h>
int main()
{
    double a,b=1,c, S=0;
    for(a=1,b=1; a<=39;b=b+b,a=a+2)
    {
        c=a/b;
        S+=c;
    }
    printf("%.2lf\n",S);
    return 0;
}
