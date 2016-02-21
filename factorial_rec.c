#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return(n * factorial (n - 1));
}
int main ()
{
	int n;
	int fact = 1;
	printf("Input the number to calculate it's factorial > 0 \n");
	scanf("%d", &n);
	if (n < 0)
		printf("Input the number >0 \n");
	else
	{	
		fact = factorial(n);
		printf("Factorial %d! = %d \n", n, fact);
	}
return 0;
}	
