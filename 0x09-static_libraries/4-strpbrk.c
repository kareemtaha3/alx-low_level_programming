#include "main.h"
/**
 * _strpbrk-function to search for any set of bytes
 * @s:array of chars
 * @accept:array of chars
 * Return:return the set of bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		int j;

		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}



	return (NULL);
}
