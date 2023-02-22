#include<stdio.h>
/**
 * main-print sum of even-valued terms.
 * Return: always 0.
 */
int main(void)
{
	long int  n1 = 1, n2 = 2, fn = 0, sum = 0;

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
