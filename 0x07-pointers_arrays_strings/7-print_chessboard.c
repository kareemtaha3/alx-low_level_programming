#include "main.h"
/**
 * print_chessboard-function to print chess board :)
 * @a:two dimentional array
 * Return: no return value
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++i)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}


}

