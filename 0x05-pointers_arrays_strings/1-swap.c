#include "main.h"
/*
 * swap_int - swap value of two integers
 * @a:first number
 * @b:second number
 * */
void swap_int(int  *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
