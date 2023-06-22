#include "main.h"

/**
 * _isupper-function check if letter is upper case or not
 * @c:paramter
 * Return: return 1 if upper case and 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
