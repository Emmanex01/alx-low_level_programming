#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: points to the strings address
 *
 * Return: always return 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_putchar(s++);
	} else
	{
	_putchar('\n');
	}
}
