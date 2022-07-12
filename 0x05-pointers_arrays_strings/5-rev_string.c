#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses the string
 * @s: char array
 * Return: none
 */

void rev_string(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < (i / 2); j++)
	{
		char temp = s[j];

		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
