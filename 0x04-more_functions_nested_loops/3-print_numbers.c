#include "main.h"

/**
 * print_numbers-function check if letter is upper case or not
 *		only using _puhcar twice
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; ++i)
		_putchar(i + 48);
	_putchar('\n');
}
