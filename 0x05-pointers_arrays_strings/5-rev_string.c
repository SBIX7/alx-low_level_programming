#include "main.h"
/**
 * rev_string - function that rverse a string
 * @s: string
 * return: the string revrsed
 */
void rev_string(char *s)
{
int i;
char a;
for (i = 0; i <= strlen(s)/2; i++)
{
	a = s[i];
	s[i] = s[strlen(s) - i];
	s[strlen(s) - i] = a;
}
}
