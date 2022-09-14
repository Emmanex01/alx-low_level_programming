#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
