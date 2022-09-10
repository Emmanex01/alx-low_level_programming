#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
	char loweruppercase;

	for (loweruppercase = 'a'; loweruppercase >= 'z'; ++loweruppercase)
		putchar(loweruppercase);
	for (loweruppercase = 'A'; loweruppercase >= 'Z'; ++loweruppercase)
		putchar(loweruppercase);
	putchar('\n');
	return (0);
}
