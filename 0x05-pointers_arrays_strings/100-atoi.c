#include "main.h"
/**
 */
int _atoi(char *s)
{
	unsigned int i = 0, l = 0, oi = 0, pn = 1, m = 1, n;

	while (*(s + i) != '\0')
	{
		if (l > 0 && (*(s + i) < '0' || *(s + i) > '9'))
			break;

		if (*(s + i) == '-')
			pn *= -1;
		
		if ((*(s + i) >= '0' && (*(s + i) <= '9')))
		{
			if (l > 0)
				m *= 10;
			l++;
		}
		i++;
	}

	for (n = i - l; n < i; i++)
	{
		oi = oi + ((*(s + n) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}

