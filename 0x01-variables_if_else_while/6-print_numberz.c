#include<stdio.h>

/**
 * main - print all single digit numberss of base 10 starting from 0.
 * Return: always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar ((num % 10) + '0');

	putchar ('\n');

	return (0);
}
