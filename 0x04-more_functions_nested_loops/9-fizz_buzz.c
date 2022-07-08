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
	int ii = 1;

	do {
		if ((ii % 3 == 0) && (ii % 5 == 0))
			printf("FizzBuzz");
		else if (ii % 3 == 0)
			printf("Fizz");
		else if (ii % 5 == 0)
			printf("Buzz");
		else
			printf("%d", ii);
		if (ii != stopVar)
			printf(" ");
		ii++;
	} while (ii < stopVar + 1);
	printf("\n");

	return (0);
}
