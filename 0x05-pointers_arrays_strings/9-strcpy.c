#include "main.h"
/**
 *_strlen-function to count the length of the string
 *@s:parameter
 *Return:return an integer
 */
int _strlen(char *s)
{
	int count, i;

	i = 0, count = 0;
	while (s[i] != '\0')
	{
		++count;
		++i;
	}
	return (count);
}
/**
 * _strcpy-function to revres
 * @dest:copy string
 * @src:string
 * Return: return the copy
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; i <= len; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
