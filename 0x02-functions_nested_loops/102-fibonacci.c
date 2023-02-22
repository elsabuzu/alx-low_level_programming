#include<stdio.h>

/**
 * main - prints 50 fibonacci numbers
 * starting with 1 and 2.
 * return: always 0.
 */
int main(void)
{
	int count;
	unsigned long a = 1, b = 2, fn;

	printf("%ld, %ld", a, b);
	for (count = 0; count < 50; count++)
	{
		fn = a + b;
		printf(", %ld", fn);
		a = b;
		b = fn;
	}
	print("\n");
	return (0);
}
