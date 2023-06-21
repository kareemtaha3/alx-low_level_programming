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
	int i, sum = 0;

	for (i = 3; i < 1024; ++i)
	{
		if (i % 3 || i % 5)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
