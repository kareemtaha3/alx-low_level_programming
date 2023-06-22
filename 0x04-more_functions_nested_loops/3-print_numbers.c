#include "main.h"

/**
 * print_numbers-function check if letter is upper case or not
 *		only using _puhcar twice
 * Return: Always 0 (Success)
 */


void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
