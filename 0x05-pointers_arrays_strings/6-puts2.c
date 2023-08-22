#include "main.h"
#include <string.h>
/**
 * puts2 - fuction
 * @str: string
 * return; string
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
	_putchar(str[i]);
	if (str[i + 1] != '\0')
	{
		_putchar(str[i + 1]);
	}
	i += 2;
}
}
