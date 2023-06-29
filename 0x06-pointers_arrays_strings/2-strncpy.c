#include "main.h"
#include <string.h>
/**
 * _strncpy-function to copy n char of the second string to the first string
 * @dest:first string
 * @src:second string
 * @n:number of char from src
 * Return:return a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
