#include "main.h"

/**
 *_strlen-function to count the length of the string
 *@s:parameter
 *Return:return an integer
 */
int _strlen(char *s)
{
	int count, i;

	i = 0, count = 0;
	while (s[i] != '\0')
	{
		++count;
		++i;
	}
	return (count);
}


/**
 * puts_half-function to print a string
 * @str:string
 * Return: no return value
 */

void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);
	i = (len - 1) / 2;
	while (i < len)
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');
}
