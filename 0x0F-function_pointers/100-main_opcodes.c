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
	int len, i;
	char *op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	len = atoi(argv[1]);
	if (len < 0)
	{
		printf("Error\n");
		exit(2);
	}
	op = (char *)main;
	for (i = 0; i < len; i++)
	{
		printf("%02hhx", op[i]);
		if (i < len - 1)
		printf(" ");
	}
	printf("\n");
	return (0);
}
