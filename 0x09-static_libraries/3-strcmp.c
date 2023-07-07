#include "main.h"
#include <string.h>
/**
 * _strcmp-function to copy n char of the second string to the first string
 * @s1:first string
 * @s2:second string
 * Return:return an integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			return (((int)*s1 - 48) - ((int)*s2 - 48));
		}
		++s1;
		++s2;
	}
	return (0);
}
