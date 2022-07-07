#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal after space
 * @n: length of space
 * Return: 1 or 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (i <= 0)
		_putchar('\n');
}
