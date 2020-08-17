#include<stdio.h>
#include<string.h>
int main(){
    int n, j;
    char num[101];
    long long leds;


    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
            scanf("%s", &num);
            int l = strlen(num);
            leds = 0;
            for(j=0;j<l;j++)
            {
                if(num[j]=='1') leds += 2;
                else if((num[j]=='2') || (num[j]=='3') || (num[j]=='5')) leds +=5;
                else if((num[j]=='4') || (num[j])=='7') leds +=4;
                else if((num[j]=='0') || (num[j]=='9') || (num[j]=='6')) leds +=6;
                else if(num[j]=='8') leds += 7;
                else if(num[j]=='1') leds +=2;
                else break;
            }
            printf("%lld leds\n", leds);
    }
    return 0;
}
