#include "main.h"
/**
 * rot13 - encode a string using rot13.
 * @r: string.
 * Return: address of r.
 */

char *rot13(char *r)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(r + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(r + i))
			{
				*(r + i) = b[i];
				break;
			}
		}
	}
	return (r);
i}
