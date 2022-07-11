#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps numbers
 * @a: first number
 * @b: second number
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
