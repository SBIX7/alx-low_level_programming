#include "main.h"
#include <stdio.h>

/**
 * main - a programm that print the number of the argument passed in it
 * Description: void.
 * @argc: the number of the arguments passed to the programm.
 * @argv: the list of pointers to strings.
 * Return: always 0 if the programm succefully executed.
 */

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"

int main(int argc, char const **argv)
{
	printf("%d\n", argc);
	return (0);
}

#pragma GCC diagnostic pop
