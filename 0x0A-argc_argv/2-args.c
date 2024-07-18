#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints all arguments passed to the program.
 * @argc: the number of arguments passed to the program.
 * @argv: list of pointers to strings.
 *
 * Return: zero.
 */

int main(int argc, char const **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
