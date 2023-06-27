#include "main.h"
/**
 * puts2-function to print a string
 * @str:string
 * Return: no return value
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
