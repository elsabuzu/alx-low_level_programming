#include<stdio.h>
/**
 * main-print sum of even-valued terms.
 * Return: always 0.
 */
int main(void)
{
	unsigned long n1 = 1, n2 = 2, fn;
	float sum;

	while(fn <= 4000000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
		if ((n1 % 2) == 0)
			sum += n1;
	}
	printf("%ld\n", sum);
	return (0);
}
