#include <stdio.h>

int *bubble_sort (int A[], int n)
{
	int i, j, c;
 		for (i = 0; i < n; i++)
    	   		for (j = 0; j < n - 1; j++)
             			if (A [j + 1] < A [j])
            				{
                			c = A [j];
                			A [j] = A [j + 1];
                			A [j + 1] = c;
            				}
     	return A;
}
int main (void)
	
{
	int n;
	printf("Input the number of elements: ");
	scanf("%d", &n);
	
	int i;
	int A [100];
	printf("Enter %d elements: \n", n);

	for (i = 0; i < n;  i++)
		scanf("%d",&A[i]);
		
	int *bubble = bubble_sort (A, n);
 	
	printf("After sorting: ");
 	for (i =0; i < n; i++)
		printf(" %d", bubble [i]);
	printf("\n");
	return(0);
}
