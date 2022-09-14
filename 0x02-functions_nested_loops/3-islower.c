#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * Return: always return 0
 */
int _islower(int c)
{
	char a;

	scanf("%s\n", &a);
	_putchar(islower(a));
}
