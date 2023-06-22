#include "main.h"

/**
 * more_numbers-print from 0 to 9
 *		apart from 2 to 4 you can
 *		only using _puhcar twice
 * Return: Always 0 (Success)
 */


void more_numbers(void)
{
	int num, i;

	for (i = 0; i < 10; ++i)
	{
		for (num = 0; num <= 14; ++num)
		{
			_putchar(num + 48);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
