#include "main.h"
/**
 * reverse_array-function to reverse the element of the array
 * @a:array of integers
 * @n:number of elements in the array
 * Return:no return value
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0;

	for (i = 0; i < n / 2; ++i)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;

	}
}
