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
/**
 *is_pal-function
 *@s:string
 *@i:counter
 *@j:counter
 *Return:0 or 1
 */
int is_pal(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	else if (i >= j)
		return (1);
	else
		return (is_pal(s, ++i, --j));
}
/**
 * is_palindrome-function
 * @s:string
 * Return:0 or 1
 */
int is_palindrome(char *s)
{
	return (is_pal(s, 0, _strlen_recursion(s) - 1));
}
