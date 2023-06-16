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
	int n = 0;
	char c = 'a';

	while (n < 10)
	{
		putchar(n+'0');
		++n;
	}
	while (c <= 'f')
	{
		putchar(c);
		++c;
	}
	putchar('\n');

	return (0);
}
