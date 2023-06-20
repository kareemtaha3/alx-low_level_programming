#include "main.h"
/**
 *times_table-function print the clock
 */

void times_table(void)
{
	int a = 0, b = 0, flag = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			if (flag)
			{
				_putchar(',');
				_putchar(' ');
				if (a * b <= 9)
					_putchar(' ');
			}
			flag = 1;
			if (a * b <= 9)
				_putchar(a * b + '0');
			else
			{
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			++b;
		}
		++a;
		flag = 0;
		_putchar('\n');
	}

}
