#include "main.h"
/**
 * _isalpha - entry point
 *
 * @c: holds compared value
 *
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
