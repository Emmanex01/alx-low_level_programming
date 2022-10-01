#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints the program's name
 * @argc: counts the number of arguments
 * @argv: array of pointer to array of strings
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
