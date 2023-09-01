#include "main.h"

/**
 * set_bit - change the value of a bit in a given index.
 * @n: checking bits
 * @index: which to check bit
 *
 * Return: the value of the bit at index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pos;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	*n = *n | div;

	return (1);
}
