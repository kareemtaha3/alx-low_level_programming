#include "main.h"
#include <string.h>
/**
 * _strcat-function to concatinate two strings
 * @dest:first string
 * @src:second string
 * Return:return a string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	int i;

	for (i = 0; i < src_len; ++i)
		dest[dest_len + i] = src[i];
	dest[dest_len + src_len] = '\0';
	return (dest);
}
