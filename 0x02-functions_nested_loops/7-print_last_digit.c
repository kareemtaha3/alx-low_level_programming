#include "main.h"
/**
 *print_last_digit-function determine if lower case or upper case
 * @n: is a parameter might be upper case or lower case
 * Return: value of _islower is 1 if lower case and 0 if upper case
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);

}
