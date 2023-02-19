#include<stdio.h>

/**
 * main -prints alphabets in lowercase then in uppercase
 * Return-zero.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar (letter);
	}
	putchar ('\n');

	return (0);
}
