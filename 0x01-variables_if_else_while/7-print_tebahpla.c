#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the letters of lowercase in reverse
 *
 * Return: 0 if successful
 */
int main(void)
{
	int var;

	for (var = 'z'; var >= 'a'; var--)
	{
		putchar(var);
	}
	putchar('\n');
	return (0);
}
