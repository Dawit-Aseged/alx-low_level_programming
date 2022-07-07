#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a diagonal after space
 * @size: length of space
 * Return: 1 or 0
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (i <= 0)
		_putchar('\n');
}
