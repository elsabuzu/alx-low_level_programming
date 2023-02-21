#include "main.h"

/**
 * print_sign - prints the sign number.
 *
 * @n: input number.
 * return: 1  is greater than 0, -1 is lessthan 0, 0 is equal to 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
