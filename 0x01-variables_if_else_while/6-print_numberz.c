#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 0;

	for (ch = 48; ch <= 57; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
