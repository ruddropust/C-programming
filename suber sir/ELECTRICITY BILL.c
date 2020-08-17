#include <stdio.h>
int main()
{
    double unit;
    printf("Enter total units consumed: ");
    scanf("%lf",&unit);
    if(unit<=50){
        printf("Bill amount is: ");
        printf("%lf",unit*3.75);
}
    else if(51<=unit<=75){
        printf("Bill amount is: ");
        printf("%lf",(unit*4));
}
    else if(76<=unit<=200){
        printf("Bill amount is: ");
        printf("%lf",(unit*5.45));
}
    else if(201<=unit<=300){
        printf("Bill amount is: ");
        printf("%lf",(unit*5.70));
}
    else if(301<=unit<=400){
        printf("Bill amount is: ");
        printf("%lf",(unit*6.02));
}
    else if(401<=unit<=600){
        printf("Bill amount is: ");
        printf("%lf",(unit*9.30));
}

    else{
        printf("Bill amount is: ");
        printf("%lf",(float)(unit*10.7));
}

    return 0;
}


