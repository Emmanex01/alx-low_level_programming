#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: input string
 * @n: length of a string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		_strlen_recursion(s + 1);
		_putchar(n);
	}
}
