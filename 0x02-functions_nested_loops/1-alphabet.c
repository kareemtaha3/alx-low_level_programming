#include "main.h"
/**
 *print_alphabet -utilizes on th _putchar function to print
 *		the alpabet a to z
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		++ch;
	}
	_putchar('\n');
