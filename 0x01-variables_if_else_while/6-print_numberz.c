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

	while (c < 10)
	{
		putchar(c + '0');
		++c;
	}
	putchar('\n');

	return (0);
}
