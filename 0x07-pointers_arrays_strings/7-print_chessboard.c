#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Print the cheessboard.
 * @a: an pointer that point to an array.
 *
 * Return: Chessboard.
 */
void print_chessboard(char (*a)[8])
{
for (int i = 0; i < 8; i++)
{
	for (int j = 0; j < 8; j++)
	{
		_putchar(a[i][j]);
		if ((j + 1) % 8 == 0)
		_putchar('\n');
	}
}
}
