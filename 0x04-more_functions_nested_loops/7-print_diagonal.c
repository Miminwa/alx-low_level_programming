#include "main.h"

/**
 * print_diagonal -> printing line
 * @n: integer params
 */

void print_diagonal(int n)
{
	if (n < 1)
		_putchar('\n');
	else
	{
		int jj;

		for (jj = 1; jj <= n; jj++)
		{
			int ii;

			for (ii = 1; ii <= jj; ii++)
			{
				if (ii == jj)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
