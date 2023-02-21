#include "main.h"

/**
 * print_sign - prints the sign number.
 *
 * @n: input number.
 * return: 1 if n is greater than zero,
 * -1 n is less than zero, 0 if n is equal to zero.
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
