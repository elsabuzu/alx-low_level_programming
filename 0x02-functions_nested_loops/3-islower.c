#include "main.h"
/**
 * _islower- checks for lowercase character
 *
 * c- character in ASCII code
 *
 * Return: 1 if character is lowercase, 0 otherwsie.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}

}
