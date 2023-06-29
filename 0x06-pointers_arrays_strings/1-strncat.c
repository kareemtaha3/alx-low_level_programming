#include "main.h"
#include <string.h>
/**
 * _strncat-function to concatinate two strings
 * @dest:first string
 * @src:second string
 * @n:number of char from src
 * Return:return a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[0] != '\0'; ++i)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
