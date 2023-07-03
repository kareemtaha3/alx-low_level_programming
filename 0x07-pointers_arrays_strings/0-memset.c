#include "main.h"
/**
 * _memset-function for filling the memory with constant byte
 * @s:array of char the function will fill it with b
 * @b:the char will be filled in the array
 * @n:number of char will be changed in the array
 * Return:return array of chars
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		++i;
	}
	return (s);
}
