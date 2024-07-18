#include "main.h"
#include <stdio.h>

/**
 * main - a programm that print the number of the argument passed in it
 * Description: void.
 * @argc: the number of the arguments passed to the programm.
 * @argv: the list of pointers to strings.
 * Return: always 0 if the programm succefully executed.
 */

int main(int argc, char const **argv)
{
	printf("%d", argc);
	return (0);
}
