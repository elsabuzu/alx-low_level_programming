#include "main.h"
/**
 * print_times_table - prints the times table starting with 0.
 *@n:value of number times table.
 */
void print_times_table(int n)
{
	int a, b, prod;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);

			for (b = 1; b <= n; b++)
			{
				_putchar(44);
				_putchar(32);

				prod = a * b;

				if (prod <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(prod + 48);
				}
				else if (prod <= 99)
				{
					_putchar(32);
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else
				{
					_putchar(((prod / 100) % 10) + 48);
					_putchar(((prod / 10) % 10) + 48);
					_putchar((prod % 10) + 48);
				}

			}
			_putchar('\n');
		}
	}
}
