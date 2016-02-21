#include <stdio.h>

long factorial(int n)
{
	int c, result;
	result = 1;
	for (c = 1; c <= n; c++)
		result = result * c;
 	return result;
}
int main ()
{
	int n;
	long fact = 1;
	printf("Input the number to calculate it's factorial > 0 \n");
	scanf("%d", &n);
	printf("Factorial %d! = %d \n", n, factorial(n));
	return 0;

}	
