#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main code.
 * Description: a program that work like a calculator of two argument given in the command line.
 * @argc: the number of the arguments passed.
 * @argv: list of the pointers for strings.
 * Return: null.
 */

int main(int argc, char const **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
