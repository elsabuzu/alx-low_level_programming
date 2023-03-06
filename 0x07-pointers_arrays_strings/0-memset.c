#include "main.h"
/**
 * _memset - fills the memory with the constant bytes.
 * @s:memory area.
 * @b:constant byte.
 * @n:filled byte.
 * Return:a pointer to thee memory area s.
 * */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

