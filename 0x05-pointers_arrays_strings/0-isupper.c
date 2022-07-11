#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if it upper
 * @c: character to be checked
 * Return: 1 or 0
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
