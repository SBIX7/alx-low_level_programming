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
	int i, s = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
		s = s + (strlen(av[i]) + 1);
	}
	p = malloc(s + 1);
	if (p == NULL)
	return (NULL);
	p[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		strcat(p, av[i]);
		strcat(p, "\n");
	}
	return (p);
}
