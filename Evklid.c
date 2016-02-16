#include <stdio.h>
int greatestCommonDivisor(int a, int b)
	{
	while (a != 0 && b != 0)
		{
		if (a > b)
           		a -= b;
      		else
           		b -= a;
		}
	return a;	
	}
int main (void)
	{
	int a, b; 
	printf("Input two numbers: \n");
	scanf ("%d %d", &a, &b);
	
	int gcd = greatestCommonDivisor(a, b); 
  	printf("The GCD of %d and %d is %d\n", a, b, gcd);

	return (0);
	}
