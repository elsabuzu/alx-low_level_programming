#include "main.h"
/**
 * print_cheesboard- print chessboard.
 * @a:pointer to pieces to print.
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	
	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			_putchar('\n');
		}

		_putchar(a[i / 8][i - j]);
	}
	_putchar('\n');
}
