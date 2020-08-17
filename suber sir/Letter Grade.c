
#include <stdio.h>
int main()
{
    int mark;
    printf("Enter Your mark: ");
    scanf("%d",&mark);
    if(mark>=0 && mark<=100){
    if(80<=mark && mark<=100){
        printf("Your letter Grade:A+ ");

}
    else if(70<=mark && mark<=79){
        printf("Your letter Grade:A");
    }

    else if(60<=mark && mark<=69){
        printf("Your letter Grade:A-");

    }
    else if(50<=mark && mark<=59){
        printf("Your letter Grade:B");

}
    else if(40<=mark && mark<=49){
        printf("Your letter Grade:C");

}
    else if(33<=mark && mark<=39){
        printf("Your letter Grade:A-");
    }


    else{
        printf("Your letter Grade:F");
    }
}
else{
    printf("Your mark is not Valid");
}
    return 0;
}


