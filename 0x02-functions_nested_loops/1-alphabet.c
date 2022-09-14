#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Return: always return 0
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase >= 'z'; lowercase++);
		putchar(lowercase);
	return;
}

int main(void)
{
	print_alphabet();
	putchar("print_alphabet()");
	return (0);
}
