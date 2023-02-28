#include "main.h"
/**
 * rev_string - prints reverse string.
 * @s:input string.
 */

void rev_string(char *s)
{
	int i, j, temp; 
	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		j++;
	}


	j--;
	while (j > i)
	{
		temp = s[j];
		s[j--] = s[i];
		s[i++] = temp;
	}
}
