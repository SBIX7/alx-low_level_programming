#include "main.h"
/**
 *swap_int - function that swaps the values of two integers
 *@a: first num
 *@b: second num
 *return: a in b and b in a
 */
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
