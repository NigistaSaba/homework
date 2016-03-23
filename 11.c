#include <stdio.h>

int main (void)
{
	int a;
	printf("Chose a type of array.\n Print 0 to input usual array or 1 to input associative array: ");
	scanf("%d", &a);
	
	if (a == 0)
	{	
		int array [100], i, n, o;

		printf("Input the number of elements: ");
		scanf("%d", &n);

		printf("Enter %d elements: \n", n);
		for (i = 0; i < n;  i++)
			scanf("%d",&array[i]);

		printf("Choose a type of operation: \n 1 - to print the array \n 2 - to  insert an element \n", o);
		scanf("%d", &o);
		if (o == 1)
		{
			printf("Array: \n");
			for (i = 0; i < n;  i++);
			printf(" %d", array[i]);
		}
		else if (o == 2)
		{
			int  position, value;
		
			printf("Enter the location where you wish to insert an element \n");
			scanf("%d", &position);

			printf("Enter the value to insert \n");
			scanf("%d", &value);
		
			for (i = n - 1; i >= position - 1; i--)
				array[i+1] = array[i];
			array[position-1] = value;
		
			printf("Modified array is \n");
			for (i = 0; i <= n; i++) 			
				printf("%d\n", array[i]);
		}
		
	}

	else if (a == 1)
	printf("associative array: \n");
	else if (a !=0 | a != 1)
	printf("choose a corret type of array \n");
	return(0); 	
}
