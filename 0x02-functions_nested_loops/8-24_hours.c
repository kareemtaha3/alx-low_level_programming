#include "main.h"
/**
 *jack_bauer-function print the clock
 */

void jack_bauer(void)
{
	int a = 0, b = 0, c = 0, d = 0;

	while (a < 3)
	{
		while (b <= 9)
		{
			while (c < 6)
			{
				while (d <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					if (a == 2 && b == 3 && c == 5 && d == 9)
						break;
					++d;
				}
				++c;
			}
			++b;
		}
		++a;
	}

}
