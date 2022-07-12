#include <stdio.h>
#include "main.h"

/**
 *  print_rev - prints the string and adds a new line
 * @s: char array
 * Return: none
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
