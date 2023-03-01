#include "main.h"
/**
 * _atoi - convert string to integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	int i = 0, m = 1, n = 0;
	unsigned int l = 0;

	while (s[i])
	{
		if (s[i] == 45)
			m *= -1;

		while (s[i] >= 48 && s[i] <= 57)
		{
			n = 1;
			l = (l * 10) + (s[i] - '0');
			i++;
		}		
		if (n == 1)
		{
			break;
		}
		i++;
	}

	l *= m;
	return (l);
}

