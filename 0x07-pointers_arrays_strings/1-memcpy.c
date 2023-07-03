#include "main.h"
/**
 * _memcpy-function to copy from src to dest
 * @dest: array of char
 * @src:array of char
 * @n:number of char will be copied
 * Return:return array of chars
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}



	return (dest);
}
