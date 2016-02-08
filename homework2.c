#include <stdio.h>

int main (void)
{
	int numElements;
	int i;
	int array [100];
	
	printf("Input the number of elements: \n ");
	scanf ("%d", &numElements);

	printf ("Enter %d elements: \n", numElements);
	for (i=0; i<numElements;  i++)
 {
	scanf("%d",&array[i]);
}
	int min = array[0];

	for (i=0; i<numElements;  i++)
{
	if (min > array[i])
	min = array[i];
}
	printf ("Minimum %d\n", min);

	int max = array [0];
	for (i=0; i<numElements;  i++)
{
	if (max < array[i])
	max = array[i];
}
	printf ("Maximum %d\n", max);

	int sum = 0;
	for (i=0; i<numElements;  i++)
{	sum += array[i];
}
	printf ("summa: %d \n", sum);	
	
	float srednee;
	srednee = sum / numElements;
	printf ("Srednee: %.2f \n", srednee);	
	
	printf ("Massiv v kvadrate \n");
	for (i=0; i<numElements;  i++)
{	array[i]= array[i]*array[i];
	printf ("%d\t", array[i]);
}
	printf ("\n");
return (0); 
}
