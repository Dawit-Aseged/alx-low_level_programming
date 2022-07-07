#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line
 * @n: length of line
 * Return: 1 or 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
