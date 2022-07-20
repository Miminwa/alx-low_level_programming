#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * @s: string
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);
}
