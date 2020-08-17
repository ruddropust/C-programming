#include <stdio.h>

int main()
{

    int n, i, j, tmp;
//input array size
    printf("Input the size of array : ");
    scanf("%d", &n);
    int arr1[100];
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
            {
	      printf("Element - %d : ",i+1);
	      scanf("%d",&arr1[i]);
	    }
//Ascending//
    for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr1[j] <arr1[i])
                {
                    tmp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = tmp;
                }

            }
    }

    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", arr1[i]);
    }
        printf("\n\n");
//Descending
     for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[j] > arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }

        }
    }
     printf("\nElements of array is sorted in descending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", arr1[i]);
    }
	        printf("\n\n");

	       return 0;
}
