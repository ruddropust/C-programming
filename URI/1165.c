#include<stdio.h>

int main(){
    int num,i,n,count,a;

    scanf("%d",&n);
    for(num = 1;num<=n;num++){
            scanf("%d",&a);
         count = 0;
         for(i=2;i<=a/2;i++){
             if(a%i==0){
                 count++;
                 break;
             }
        }

         if(count==0 && a!= 1)
             printf("%d eh primo\n",a);
             else
                 printf("%d nao eh primo\n",a);
    }

   return 0;
}
