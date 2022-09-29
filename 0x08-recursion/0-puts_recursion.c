#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: points to the strings address
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
