#include <stdio.h>

int main (void)
	
{
	int n;
	printf("Input the number of elements: ");
	scanf("%d", &n);
	
	int i;
	int array [100];
	printf("Enter %d elements: \n", n);

	for (i = 0; i < n;  i++)
		scanf("%d",&A[i]);
		
	int j, c;
 	for (i = 0; i < n; i++)
    	   	for (j = 0; j < n - 1; j++)
             		if (A [j + 1] < A [j])
            		{
                		c = A [j];
                		A [j] = A [j + 1];
                		A [j + 1] = c;
            		}
     		
 	printf("After sorting: ");
 	for (i =0; i < n; i++)
		printf(" %d", A [i]);
	printf("\n");
	return(0);
}
