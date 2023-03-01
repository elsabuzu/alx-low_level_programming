#include "main.h"
#include<stdio.h>
/**
 * puts2 - prints character string starting from the first.
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
