#include <stdio.h>
#include "main.h"

/**
 *  _strlen - gets string length
 * @s: char array
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
