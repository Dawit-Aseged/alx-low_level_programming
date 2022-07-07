#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a diagonal after space
 * @size: length of space
 * Return: 1 or 0
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - (i + 1); j++)
			_putchar(' ');
		for (k = 0; k < i + 1; k++)
			_putchar('#');
		_putchar('\n');
	}

	if (i <= 0)
		_putchar('\n');
}
