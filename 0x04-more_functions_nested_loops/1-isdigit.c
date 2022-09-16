#include "main.h"

/**
 * _isdigit - checks through 0 to 9
 *
 * @c: integers to be compared
 *
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
