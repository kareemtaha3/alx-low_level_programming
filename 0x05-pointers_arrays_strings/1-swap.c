#include "main.h"
/**
 * swap_int-function swap two numbers by using thier refrences
 * @a:point to an integer
 * @b:point to an integer
 * Renturn: no return value
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
