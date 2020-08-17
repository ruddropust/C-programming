#include<stdio.h>
struct distance
{
    int feet;
    float inch;
}dist1,dist2,sum;
int main()
{
    printf("1st distance\n");
    printf("Enter feet: ");
    scanf("%f",&dist1.inch);


    printf("Enter Inch: ");
    scanf("%d",&dist1.feet);

    printf("\n2nd distance\n");
    printf("Enter feet: ");
    scanf("%d",&dist2.feet);

    printf("Enter Inch: ");
    scanf("%d",&dist2.feet);

    //adding feet
    sum.feet = dist1.feet + dist2.feet;
    //adding inch
    sum.inch = dist1.inch + dist2.inch;

    while (sum.inch >= 12)
    {
        ++sum.feet;
        sum.inch = sum.inch - 12;

    }

    prinf("Sum of distance = %d\'-%0.1f\"",sum.feet,sum.inch);
    return 0;

}
