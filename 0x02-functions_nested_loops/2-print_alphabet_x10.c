#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times lowercase alphabets.
 */
void print_alphabet_x10(void)
{
	char letter;
	int count = 0;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
