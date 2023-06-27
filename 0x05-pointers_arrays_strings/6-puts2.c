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
 * puts2-function to print a string
 * @str:string
 * Return: no return value
 */

void puts2(char *str)
{
	int i, len;

	i = 0;
	len = _strlen(str);
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
