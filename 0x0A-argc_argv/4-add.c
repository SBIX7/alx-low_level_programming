#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program that adds numbers
 * Description: nt
 * @argc: the number of arguments passed to the program.
 * @argv: list of pointers to strings.
 * Return: zero.
 */

int main(int argc, char const **argv)
{
	int s = 0, i;
	size_t j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!(argv[i][j] <= 57 && argv[i][j] >= 48))
			{
				printf("Error\n");
				return (1);
			}
		}
		s = s + atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
