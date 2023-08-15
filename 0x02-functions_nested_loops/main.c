#include <stdio.h>
#include "main.h"
void _putchar(char T[])
{
	int i = 0;
	while (T[i] != '\0')
	{
		putchar(T[i]);
		i++;
	}
putchar('\n');
}
