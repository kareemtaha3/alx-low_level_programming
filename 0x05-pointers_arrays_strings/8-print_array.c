#include "main.h"
/**
 * print_array-function to print a array elements
 * @a:array
 * @n:how many elements to print
 * Return: no return value
 */

void print_array(int *a, int n)
{
	int i, flag = 0;

	for (i = 0; i < n; ++i)
	{
		if (flag)
			printf(", ");
		printf("%d", a[i]);
		flag = 1;
	}
	printf("\n");
}
