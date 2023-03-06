#include "main.h"
/**
 * _strspn - get length of a prefix substring.
 * @s: string
 * @accept: accept bytes.
 * Return: number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, z;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		z = 1;
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if(*(s + x) == *(accept + y))
			{
				z = 0;
				break;
			}
		}
		if (z == 1)
			break;
	}
	return (x);
}

