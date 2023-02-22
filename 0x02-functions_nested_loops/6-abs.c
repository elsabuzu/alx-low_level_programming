#include "main.h"

/**
 * _abs - compute the absolute value of an integeer.
 *
 * @i: input integer.
 * Return: i if greater than zero, multiply by -1 oherwise.
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
