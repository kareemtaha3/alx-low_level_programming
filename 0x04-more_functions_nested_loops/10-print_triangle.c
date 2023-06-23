#include "main.h"

/**
 * print_triangle-print line
 * @size: parameter
 * Return: Always 0 (Success)
 */


void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i < size; ++i)
	{
		for (j = size - i - 1; j > 0; ++i)
			_putchar(' ');

		for (j = 0; j < i + 1; ++j)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	}






}
