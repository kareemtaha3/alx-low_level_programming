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
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		--c;
	}
	putchar('\n');

	return (0);
}
