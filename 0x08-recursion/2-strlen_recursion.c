#include "main.h"
/**
 * _strlen_recursion-function to print string
 * @s:string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(++s) + 1);
}
