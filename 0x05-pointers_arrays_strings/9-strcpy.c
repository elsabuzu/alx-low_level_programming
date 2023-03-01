#include "main.h"
#include<stdio.h>
/**
 * _strcpy  - prints copy the string pointed by src.
 * @dest:destination char argument.
 * @src:source char argument.
 * Return: destination of acharacter.
 */

char *_strcpy(char *dest, char *src)
{
	int l=0;

	while (l >= 0)
	{
		*(dest + i)= *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
