#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	printf("Last digit of %d is %d ", n, lastDigit);

	if (n > 5)
		printf("and is greater than 5\n");
	else if (n < 6 && n != 0)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");
	/* your code goes there */
	return (0);
}
