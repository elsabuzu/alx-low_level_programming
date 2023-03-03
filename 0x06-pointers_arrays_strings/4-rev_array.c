#include "main.h"
/**
 * reverse_array - reverse the content of array integers.
 * @a:array integers.
 * @n:number of element of array.
 */

void reverse_array(int *a, int n)
{
	int i, j, rev;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			rev = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = rev;
		}
	}
}
