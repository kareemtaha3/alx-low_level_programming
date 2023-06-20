#include "main.h"
/**
 *print_last_digit-function determine if lower case or upper case
 * @n: is a parameter might be upper case or lower case
 * Return: value of _islower is 1 if lower case and 0 if upper case
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = (-1) * n;

	_putchar((n % 10) + '0');
	return (n % 10);

}
