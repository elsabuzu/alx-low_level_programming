#include "main.h"
/**
 * print_rev - print a string to reverse,
 * followed by a  new  line.
 * @s: pointer to a string. 
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
