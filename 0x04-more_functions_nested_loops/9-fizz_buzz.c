#include "main.h"
#include <stdio.h>

/**
 * main - print 1 to 100
 * multiples of 3 with fizz,
 * multiples of 5 with buzz
 * and multiples of both 3 and 5 withFizzBuzzz
 * Return: 0 on successs
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (1 % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
