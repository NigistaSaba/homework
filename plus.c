#include <stdio.h>
int main (void)

{
	int a, b;

printf("Input the First number: "); /*�������� ������ �����*/
scanf("%d",&a);

printf("Input the Second number: "); /*�������� ������ �����*/
scanf("%d",&b);

	printf ("Diffirent scalar system for the first number: "); /*������ ����� � 8, 16, 10 ���-���*/
 	printf("%o %X %d \n", a,a,a);

printf ("Diffirent scalar system for the second number: "); /*������ ����� � 8, 16, 10 ���-���*/
 	printf("%o %X %d \n",b,b,b);

if (a>=b) /*������������ �����*/
		{
		printf ("Maximum number: ");
		printf ("%d\n", a);
		}
	else 
		{printf ("Maximum number: ");
		printf ("%d\n", b);
	}

if (a<=b) /*����������� ����*/
		{
		printf ("Minimum number: ");
		printf ("%d\n", a);
		}
	else 
		{printf ("Minimum number: ");
		printf ("%d\n", b);
	}

	printf ("Arithmetics ^ 10: ");
printf ("\n");
printf("%d - %d = %d\n", a, b, a - b);
printf("%d + %d = %d\n", a, b, a + b);
printf("%d * %d = %d\n", a, b, a * b);
printf("%d / %d = %d\n", a, b, a/b);
printf ("\n");

	printf ("Arithmetics ^ 8: ");
printf ("\n");
printf("%o - %o = %o\n", a, b, a - b);
printf("%o + %o = %o\n", a, b, a + b);
printf("%o * %o = %o\n", a, b, a * b);
printf("%o / %o = %o\n", a, b, a/b);
printf ("\n");

	printf ("Arithmetics ^ 16: ");
printf ("\n");
printf("%x - %x = %x\n", a, b, a - b);
printf("%x + %x = %x\n", a, b, a + b);
printf("%x * %x = %x\n", a, b, a * b);
printf("%x / %x = %x\n", a, b, a/b);
printf ("\n");

	printf("Logicheskie operacii: \n"); /*���������� ��������*/
printf("%d && %d = %d\n", a, b, a && b);
printf("%d || %d = %d\n", a, b, a || b);

printf ("\n");

	printf("Pobitovie operacii:\n"); /*��������� ��������*/
printf("%d & %d = %d\n", a, b, a & b);
printf("%d | %d = %d\n", a, b, a | b);
printf ("\n");

	printf("Sdvig:\n"); 
printf("%d << 2 = %d\n", a, b, a,b << 2);
printf("%o << 2 = %o\n", a, a << 2);
printf("%x << 2 = %x\n", a, a << 2);
printf("%d >> 2 = %d\n", a, a >> 2);
printf("%o >> 2 = %o\n", a, a >> 2);
printf("%x >> 2 = %x\n", a, a >> 2);
getchar ( );
}
