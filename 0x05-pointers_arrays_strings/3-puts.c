#include <stdio.h>
#include "main.h"

/**
 *  _puts - prints the string and adds a new line
 * @str: char array
 * Return: none
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
