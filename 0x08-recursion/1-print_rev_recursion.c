#include "main.h"
/**
 * _print_rev_recursion-function to print string
 * @s:string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*s);
}
