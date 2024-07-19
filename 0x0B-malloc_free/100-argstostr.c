#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argc.
 * @av: argv.
 * Return: concatenate arguments.
 */

char *argstostr(int ac, char **av)
{
	int i;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
		p = malloc(strlen(av[i]) + 1);
	}
	if (p == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcat(p, av[i]);
		p = p + '\n';
	}
	return (p);
}
