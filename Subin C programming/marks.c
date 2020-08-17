#include<stdio.h>
int main()
{
    int marks,count,i;

    int N[]={56,50,58,55,51,50,55,54,50,59};


    for(marks = 50  ; marks<=60 ; marks++)
    {
        count=0;
        for(i=0;i<10;i++)
        {

            if(N[i] == marks)
            {
                count++;
            }

        }
        printf("Marks : %d\t Count : %d\n",marks,count);
    }

    return 0;
}
