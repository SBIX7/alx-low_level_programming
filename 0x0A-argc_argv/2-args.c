#include "main.h"
#include <stdio.h>

/**
 * main - a function that print all arguments passed to to program.
 * Description: nthng
 * @argc: the number of the arguments passed to program.
 * @argv: list of pointers of strings.
 * @i: number of iteration.
 * Return: zero.
 */

int main(int argc, char const **argv)
{
int i;
for(i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
