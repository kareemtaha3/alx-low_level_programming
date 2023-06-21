#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: computes the sum of all
 *		the multiples of 3 or 5
 *		below 1024 (excluded)
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	long a = 1, b = 2, i, tmp = 0;

	printf("%ld", a);
	for (i = 1; i < 50; ++i)
	{
		printf(", ");
		printf("%ld", b);
		tmp = a;
		a = b;
		b = tmp + a;
	}
	printf("\n");

	return (0);
}
