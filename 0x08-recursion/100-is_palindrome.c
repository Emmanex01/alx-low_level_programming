#include "main.h"

/**
 * length - helps do it
 * @s: string
 * Return: string length
 */

int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}
