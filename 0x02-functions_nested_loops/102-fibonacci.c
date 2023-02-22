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

	for (count = 0; count < 50; count++)
	{
		fn = a + b;
		printf(", %ld", fn);
		a = b;
		b = fn;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
