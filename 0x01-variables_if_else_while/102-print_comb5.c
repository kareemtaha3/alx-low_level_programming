#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: print alphabit characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* your code goes there */
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int flag = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = a;
			while (c < 10)
			{
				d = b + 1;
				while (d < 10)
				{
					if (flag)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					++d;
					flag = 1;
				}
				++c;
			}
			++b;
		}
		++a;
	}
	putchar('\n');

	return (0);
}
