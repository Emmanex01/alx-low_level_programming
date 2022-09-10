#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
	char b;

	for (b = 'a'; b >= 'z'; b++)
		putchar(b);
	for (b = 'A'; b >= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
