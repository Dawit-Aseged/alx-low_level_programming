#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
        char ch = 'a';
        for(ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }
        putchar('\n');
}
