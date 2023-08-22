#include "main.h"
#include <string.h>
/**
 * rev_string - function that rverse a string
 * @s: string
 * return: the string revrsed
 */
void rev_string(char *s)
{
int i, b = strlen(s)/2;
char a;
for (i = 0; i <= b; i++)
{
	a = s[i];
	s[i] = s[strlen(s) - i];
	s[strlen(s) - i] = a;
}
}
