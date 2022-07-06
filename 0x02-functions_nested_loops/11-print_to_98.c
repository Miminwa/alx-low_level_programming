#include "main.h"

/**
 * print - print the variable  recursively using _putchar
 * @n: variable to print
 */
void print(int n);

/**
 * print_to_98 - print all natural numbers from varaiable to 98
 * @var: the starting limit
 */
void print_to_98(int var)
{
	int stoplimit = 98;

	if (var > stoplimit)
	{
		int ii;

		for (ii = var; ii >= stoplimit; ii--)
		{
			print(ii);
			if (ii != stoplimit)
			{
				_putchar(';');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

/**
 * print - to print
 * @n: var
 */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
