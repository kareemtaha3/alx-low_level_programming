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

	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a < 8)
			{
				putchar(',');
				putchar(' ');
			}
			++b;
		}
		++a;
	}
	putchar('\n');

	return (0);
}
