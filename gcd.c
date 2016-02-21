#include <stdio.h>
long greatestCommonDiviser (long, long);

int main (void)
{
	long a, b, gcd; 
	printf("Input two numbers: \n");
	scanf("%d %d", &a, &b);	
	gcd = greatestCommonDivisor(a, b); 
  	printf("The GCD of %d and %d is %d\n", a, b, gcd);
	return (0);
}
long greatestCommonDiviser (long a, long b)	
{	if (a == 0)
	return b;

	while (b != 0)
		{
		if (a > b)
           		a -= b;
      		else
           		b -= a;
		}
	return a;	
}
