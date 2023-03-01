#include "main.h"
/**
 * *strcpy  - prints copy the string pointed by src.
 * @dest:destination char argument.
 * @src:source char argument.
 * return: destination.
 */

char *_strcpy(char *dest, char *src)
{
	int l;
	int i;

	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

