#include<stdio.h>
typedef struct Distance{
    int feet;
    float inch;
} distances;

int main() {
    distances d1, d2;
    d1.inch = 145.24;
    printf("%0.2f",d1.inch);
    return 0;
}
