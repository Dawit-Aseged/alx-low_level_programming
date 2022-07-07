#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long number = 612852475143;
	long i;

	for (i = number - 1; i > 0; i--)
	{
		if (number % i == 0)
		{
			printf("%ld\n", i);
			return (0);
		}
	}
	return (0);
}
