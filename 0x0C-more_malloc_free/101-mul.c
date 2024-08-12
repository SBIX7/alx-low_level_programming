#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - return the result of two num muliplied.
 * @argc: number of arguments.
 * @argv: pointer to an array of chars.
 *
 * Return: result.
 */

int main(int argc, char **argv)
{
	unsigned int i;
	int a;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (!isdigit((unsigned char)argv[1][i]))
		{
		printf("Error\n");
		exit(98);
		}
	}
	for (i = 0; i < strlen(argv[2]); i++)
	{
		if (!isdigit((unsigned char)argv[2][i]))
		{
		printf("Error\n");
		exit(98);
		}
	}
	a = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", a);
	return (0);
}

