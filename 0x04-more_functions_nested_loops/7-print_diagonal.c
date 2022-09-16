#include "main.h"

/**
 * print_diagonal - prints / diagonally
 *
 * @n: number of times
 *
 */
void print_diagonal(int n)
{
	int a;

	for (a = '0'; a < n; a++)
	{
		_putchar('/');
		_putchar('\n');
	}
	_putchar('\n');
}
