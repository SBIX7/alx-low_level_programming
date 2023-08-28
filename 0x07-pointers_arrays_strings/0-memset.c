#include <string.h>
#include "main.h"

 /**
  * _memset - Function that fills memory with a constant byte.
  * @s: The Pointer to bloc.
  * @b: The value.
  * @n: Number of bytes.
  *
  * Return: A pointer to a bloc.
  */
char *_memset(char *s, char b, unsigned int n)
{
memset(s,b,n);
return (s);
}
