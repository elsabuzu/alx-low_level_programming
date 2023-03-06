#include "main.h"
/**
 * _strchr - locate a charachter in  a string.
 * @s:string.
 * @c:charcter.
 * Return: the pointer.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s !=c)
			s++;
		else
			return (s);
	}
	if (c =='\0')
		return(s);
	
	return('\0');
}
