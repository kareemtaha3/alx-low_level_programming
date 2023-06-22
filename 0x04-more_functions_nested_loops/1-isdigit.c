#include "main.h"

/**
 * _isdigit-function check if letter is upper case or not
 * @c:paramter
 * Return: return 1 if upper case and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
