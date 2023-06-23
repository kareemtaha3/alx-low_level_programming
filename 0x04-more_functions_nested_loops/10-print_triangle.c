#include "main.h"

/**
 * print_triangle-print line
 * @size: parameter
 * Return: Always 0 (Success)
 */


void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < size; ++i)
	{
		for (k = size - i - 1; k > 0; --k)
			_putchar(' ');

		for (j = 0; j < i + 1; ++j)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	}






}
