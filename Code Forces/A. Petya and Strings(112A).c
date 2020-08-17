#include<stdio.h>
#include<string.h>
int main()
{
 int x, i,diference,l;
 x=0;
 char a[200],b[200];
 scanf("%s %s",&a,&b);
 l=strlen(a);
 for(i=0;i<l;i++)
 {
     diference = a[i]-b[i];
     if((diference!=0) && (diference!=+32) && (diference!=-32) )
     {
         if((a[i]>='a' && a[i]<='z')&&(b[i]>='a' && b[i]<='z'))
            if(a[i]>b[i])
            {
                x=1;
                break;
            }

            else
                {
                    x=-1;
                    break;
                }
         if((a[i]>='A' && a[i]<='Z')&&(b[i]>='A' && b[i]<='Z'))
            if(a[i]>b[i])
            {
                x=1;
                break;
            }
            else
                {
                    x=-1;
                    break;
                }
         if((a[i]>='a' && a[i]<='z')&&(b[i]>='A' && b[i]<='Z'))
            if(a[i]>(b[i])+32)
            {
                x=1;
                break;
            }
            else
                {
                    x=-1;
                    break;
                }
         if((a[i]>='A' && a[i]<='Z')&&(b[i]>='a' && b[i]<='z'))
            if(a[i]>(b[i])-32)
             {
                x=1;
                break;
             }
            else
                {
                    x=-1;
                    break;
                }
     }
 }
 printf("%d\n",x);
 return 0;
}
