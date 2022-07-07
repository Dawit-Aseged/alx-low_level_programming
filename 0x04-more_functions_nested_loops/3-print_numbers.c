#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers
 * Return: void 
 */

void print_numbers(void)
{
	char ch = '0';
	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
