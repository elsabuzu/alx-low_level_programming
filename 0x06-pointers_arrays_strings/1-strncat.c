#include "main.h"
/**
 * *_strncat - concatenate two strings.
 * @dest:destination.
 * @src: input source.
 * @n:amount of bytes.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int n1 = 0, n2 = 0;

	while (*(dest + n1) != '\0')
	{
		n1++;
	}

	while (n2 < n)
	{
		*(dest + n1) =*(dest + n2);
		if(*(src + n2) == '\0')
			break;
		n1++;
		n2++;
	}
	return (dest);
}
