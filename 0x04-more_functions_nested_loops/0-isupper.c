#include "main.h"

/**
 * isupper - checks for uppercase
 *
 * @c: integer to check
 *
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}