#include "main.h"

/**
 * print_numbers - functions that print all numbers from 0-9
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int ii = 0;

	do {
		_putchar(ii + '0');
		ii++;
	} while (ii < 10);

	_putchar('\n');
}
