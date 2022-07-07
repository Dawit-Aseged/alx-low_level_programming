#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if it is a digit
 * @c: character to be checked
 * Return: 1 or 0
 */

int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
