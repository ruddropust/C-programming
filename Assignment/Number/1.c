  #include <stdio.h>
 int main()
 {
     int n,i,sum=0,reminder;
     scanf("%d",&n);
     for(i=1;i<=(n/2);i++){
     if(n%i==0){
            sum = sum +i;
     }
     }
     if(sum==n){
        printf("The number is perfect\n");
     }
     else{
        printf("The number isn't perfect\n");
     }


     return 0;
 }

