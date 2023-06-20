#include "main.h"
/**
 *print_alphabet_x10 -utilizes on th _putchar function to print
 *		the alpabet a to z
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		++ch;
	}
	_putchar('\n');
	++i;
	}
}
