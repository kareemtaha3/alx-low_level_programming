#include "main.h"
/**
 *_isalpha-function determine if lower case or upper case
 * @c: is a parameter might be upper case or lower case
 * Return: value of _islower is 1 if lower case and 0 if upper case
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c <= 122 && c >= 97))
	{
		return (1);
	}
	else
		return (0);
}
