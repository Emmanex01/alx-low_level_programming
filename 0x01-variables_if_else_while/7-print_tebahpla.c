#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */

int main(void)
{
	char b;

	for (b = 'z'; b >= 'a' ; b--)
		putchar(b);
	putchar('\n');
	return (0);
}
