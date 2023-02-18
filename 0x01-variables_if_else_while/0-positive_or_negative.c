#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main-> isa function that prints random number and state whether
 *         it is positive, negative or zero.
 *
 * return:always zero.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero", n);

	return (0);
}
