#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: always return 0
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i < 11; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}