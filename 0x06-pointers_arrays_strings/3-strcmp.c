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
	if (s1 > s2)
		return (s1 - s2);
	else if (s1 < s2)
		return (s1 - s2);
	else
		return (0);
}
