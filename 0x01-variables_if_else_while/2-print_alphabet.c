#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; ++lowercase)
	{
		putchar(lowercase);
		putchar('\n');
	}
	return (0);
}
