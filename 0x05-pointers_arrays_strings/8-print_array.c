#include <stdio.h>
#include "main.h"

/**
 * print_array - prints array
 * @a: array
 * @n: number
 * Return: none
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n - 1]);
	}
	putchar('\n');
}
