#include "main.h"
/**
 * puts_half - print half string.
 * @str - input string.
 */

void puts_half(char *str)
{
	int length = 0;
	char *start = str;

	while (*str)
	{
		length++;
		str++;
	}
	length += 1;
	
	start += length / 2;
	while(*start)
	{
		_putchar(*(start));
		start++;
	}
	_putchar('\n');
}
