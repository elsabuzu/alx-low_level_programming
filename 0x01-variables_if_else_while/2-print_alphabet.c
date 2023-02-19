#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - prints lower case alphabet
 * Return: zero.
 */
int main(void)
{
	char n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar (n);
	}
	putchar ('\n');

	return (0);
}
