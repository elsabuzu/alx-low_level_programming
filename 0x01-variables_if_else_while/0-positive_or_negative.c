#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - program that assign random numbers to n 
 * then prints if it is positive ,negative or zero.
 *
 * return always zero .
 */
int main(void)
{
	int n;

	srand(time(0));
	n= rand() - RAND_MAX /2;

	if (n>0)
	{
		printf("%d is positive\n", n);
	}
	else if (n<0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is Zero", n);

	return 0;
}

