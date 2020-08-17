#include<stdio.h>
int main()
{
    int i,j,marks;
    int tm[]={6,7,4,6,9,7,6,2,4,3,4,1};
    int count;

    for(marks=1;marks<10;marks++)

        {
            count=0;
            for(i=0;i<12;i++)
            {
                if(tm[i] == marks)
                {
                    count++;
                }
            }
            printf("Marks : %d\tCount : %d\n",marks,count);
          }

    return 0;
}
