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
	int c = 0;
	char s = ',';
	char l = ' ';

	while (c < 10)
	{
		putchar(c + '0');
		if (c < 9)
		{
			putchar(s);
			putchar(l);
		}
		++c;
	}
	putchar('\n');

	return (0);
}
