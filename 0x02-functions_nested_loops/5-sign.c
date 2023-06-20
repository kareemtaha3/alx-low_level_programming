#include "main.h"
/**
 *print_sign-function determine if lower case or upper case
 * @n: is a parameter might be upper case or lower case
 * Return: value of _islower is 1 if lower case and 0 if upper case
 */

int print_sign(int n)
{
	if (n > 0)
		return ("+1");
	else if (n < 0)
		return ("-1");
	else
		return (0);
}
