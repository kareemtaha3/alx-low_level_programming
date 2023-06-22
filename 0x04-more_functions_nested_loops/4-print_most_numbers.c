#include "main.h"

/**
 * print_most_numbers-function check if letter is upper case or not
 *		only using _puhcar twice
 * Return: Always 0 (Success)
 */


void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		if (num != 2 && num != 4)
			_putchar(num + 48);
	}
	_putchar('\n');
}
