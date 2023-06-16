#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: print small and captital alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* your code goes there */
	char c = 'a';

	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	while (d <= 'Z')
	{
		putchar(d);
		++d;
	}
	putchar('\n');

	return (0);
}
