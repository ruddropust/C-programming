#include<iostream>
using namespace std;
int main(void)
{
    int M,N,rect_area;
    int domino_area = 2;
    cin>>M>>N;
    rect_area = M * N;

    printf("%d",rect_area/domino_area);

    return 0;
}
