
#include <stdio.h>

void main()
{
    int arr1[100], n,count=0;
    int i, j, k;

       printf("Enter the total Cases:");
       scanf("%d",&n);

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    /*Checking duplicate elements in the array */
    printf("\nThe  unique elements found in the array are : \n");
    for(i=0; i<n; i++)
    {
        count=0;

		/*Check duplicate before the current position and
		increase counter by 1 if found.*/
        for(j=0; j<i-1; j++)
        {
            /*Increment the counter when the search value is duplicate.*/
            if(arr1[i]==arr1[j])
            {
                ctr++;
            }
        }
        /*Check duplicate after the current position and
		  increase counter by 1 if found.*/
       for(k=i+1; k<n; k++)
        {
            /*Increment the counter when the search value is duplicate.*/
            if(arr1[i]==arr1[k])
            {
                ctr++;
            }
        }
		/*Print the value of the current position of the array as unique value
		when counter remain contains its initial value.*/
       if(ctr==0)
        {
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}
