#include <stdio.h>
#include <stdlib.h>
/**
 * main - print it own opcode.
 * @argc: number of arguments.
 * @argv: list of pointers to strings.
 *
 * Return: zero if succes.
 */
int main(int argc, char **argv)
{
	int len = atoi(argv[1]), i;
	char *op = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (len < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < len; i++)
	{
		printf("%02hhx", op[i]);
		if (i < len - 1)
		printf(" ");
	}
	printf("\n");
	return (0);
}
