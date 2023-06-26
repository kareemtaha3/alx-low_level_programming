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
 * print_rev-function for printing the string in reverse order
 * @s:string value
 * Return: no return value
 */
void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		--i;
	}
	_putchar('\n');
}
