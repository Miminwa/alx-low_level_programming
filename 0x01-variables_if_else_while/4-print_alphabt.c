#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all letters of the alphabeth in lower case
 *
 * Return: 2 if successful
 */
int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		if (var == 'e' || var == 'q')
			continue;

		putchar(var);
	}
	putchar('\n');
	return (2);
}
