#include<stdio.h>

int fiboOfNthItem(int n) {

    if(n==1) return 0;
    if(n==2) return 1;

    int a = 0, b = 1, sum, i;

    for(i=3; i<=n; i++) {
        sum = a + b;

        a = b;
        b = sum;
    }

    return sum;
}

int main() {

    int i, n;

    scanf("%d", &n);

    for(i=1; i<=n; i++) {
    	printf("%d ", fiboOfNthItem(i));
    }

    printf("\n");

    return 0;
}
