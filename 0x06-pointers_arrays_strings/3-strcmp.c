#include "main.h"
/**
 * _strcmp - compares strings.
 * @s1:string one.
 * @s2:string two.
 * Return:zero if the value is  zero.
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + n) == '\0') && (*(s2 + n) == '\0'))
			break;
		op = *(s1 + n) - *(s2 + n);
		n++;
	}
	return (op);
}
