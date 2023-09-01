#include "main.h"
/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b: binary number
 * Return: unsigned int decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		++i;
	}
	unsigned int c = 0;

	for (i = 0; b[i] != '\0'; ++i)
	{
		c <<= 1;
		if (b[i] == '1')
			c += 1;
	}
	return (c);
}
