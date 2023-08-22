#include "main.h"
#include <string.h>
/**
 * puts2 - fuction
 * @str: string
 * return; string
 */
void puts2(char *str)
{
int i = 1, a = strlen(str);
while (str[i+1] != '\0')
{
	str[i] = str[0 + i];
	i++;
	a--;
}
str[a+1] = '\0';
}
