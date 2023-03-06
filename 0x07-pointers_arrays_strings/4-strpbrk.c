#include "main.h"
/**
 * _strpbrk - search a stirng for any of set of bytes.
 * @s:string.
 * @accept: matches of one of bytes.
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return(s);
		}
		s++;
	}
	return ('\0');
}
