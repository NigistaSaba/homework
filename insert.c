#include <stdio.h>
int main ()
{
	int n, c, d, t;
	int array[1000];
	printf("Input the number of elements: ");
	scanf("%d", &n);
	printf("Enter %d elements: \n", n);
	for (c = 0; c < n;  c++)
	{	
		scanf("%d",&array[c]);
	}
	for (c = 1; c <= n - 1; c++)
	{
	d = c;
	while (d > 0 && array[d] < array[d - 1] )
		{
		t = array[d];
		array[d] = array[d -1];
		array[d -1] = t;
		d --;
		}
	}
	printf("After sorting: ");
 	for (c =0; c < n; c++)
		printf(" %d", array[c]);
	printf("\n");
	return(0);
}
