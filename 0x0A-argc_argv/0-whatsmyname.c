#include "main.h"
#include <stdio.h>

/**
 * main - a programm that return the name of itslef
 * @argc: the number of argument commited to the programm from command line.
 * @argv: a pointer the a string.
 * Return: the name of the programme.
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc-1]);
	return (0);
}
