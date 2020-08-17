
#include <stdio.h>

int main()

{

    int s, e;//s=start time
              // e= end time

    scanf("%d %d", &s, &e);

    if (s == e){
            printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if ( s>e){
             printf("O JOGO DUROU %d HORA(S)\n",(e+24)-s);
            }
 else {
            printf("O JOGO DUROU %d HORA(S)\n",(e-s));
    }
return 0;
}
