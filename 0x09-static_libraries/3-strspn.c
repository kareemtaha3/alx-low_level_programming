#include "main.h"
/**
 * _strspn-function to get the length of a prefix substring
 * @s:array of chars
 * @accept:array of chars
 * Return:return length of a prefix string
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		int j;

		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (accept[j] == s[i])
			{
				++len;
				break;
			}
		}
		if (accept[j] == '\0')
			return (len);
	}



	return (len);
}
