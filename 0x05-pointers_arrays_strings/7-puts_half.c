#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half the string
 * @str: char array
 * Return: none
 */

void puts_half(char *str)
{
	int j, i = 0;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i / 2) + 1;

	while (j < i)
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');
}
