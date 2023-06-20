#include "main.h"
/**
 *_abs-function determine if lower case or upper case
 * @n: is a parameter might be upper case or lower case
 * Return: value of _islower is 1 if lower case and 0 if upper case
 */

int _abs(int n)
{
	if (n < 0)
		return ((-1) * n);
	else
		return (n);

}
