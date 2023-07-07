#include "main.h"
/**
 * _strlen-function to count the number of chars
 * @s:string
 * Return: return the string length
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
