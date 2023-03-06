#include "main.h"
/**
 * _memcpy- copies memory area.
 * @dest:destination memory area.
 * @src:source memory aresa.
 * @n:filled bytes.
 * Return:destinaion.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
