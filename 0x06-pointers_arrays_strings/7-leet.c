#include "main.h"
/**
 * leet - encoding a string to 1337.
 * @l:string.
 * Return: address of l.
 */

char *leet(char *l)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(l + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == l[i])
			{
				l[i] = b[j];
			}
		}
	}
	return (l);
}

