#include "main.h"
/**
 * _strchr-function to find char
 * @s:array of chars
 * @c:char
 * Return:return pointer to char or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; ++i)
	{
		if (s[i] == c)
			return (s + i);
	}



	return ('\0');
}
