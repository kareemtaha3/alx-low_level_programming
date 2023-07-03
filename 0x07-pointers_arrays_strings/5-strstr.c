#include "main.h"
/**
 * _strstr-function to allocate the sub string
 * @haystack:array of chars
 * @needle:array of chars
 * Return:return a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; ++i)
	{
		int j;

		for (j = 0; needle[j] != '\0'; ++j)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
