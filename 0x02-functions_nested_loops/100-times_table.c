#include "main.h"
/**
 *print_times_table-function print the clock
 *@n:parameter
 */
void print_times_table(int n)
{
	int a = 0, b = 0, flag = 0;

	if (n <= 15 && n >= 0)
	{
	for (a = 0; a <= n; ++a)
	{
		b = 0;
		for (b = 0; b <= n; ++b)
		{
			if (flag)
			{
				_putchar(',');
				_putchar(' ');
				if (a * b <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (a * b <= 99)
					_putchar(' ');
			}
			flag = 1;
			if (a * b <= 9)
				_putchar(a * b + '0');
			else if (a * b <= 99)
			{
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			else
			{
				_putchar((a * b) / 100 + '0');
				_putchar(((a * b) % 100) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
		}
		flag = 0;
		_putchar('\n');
	}
	}
}
