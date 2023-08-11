#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int a = 1;
for (i = 0; i < 9; i++)
{
	for (j = a; j < 10; j++)
	{
		putchar('0' + i);
		putchar('0' + j);
		if (i < 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	a++;
}
putchar('\n');
return (0);
}
