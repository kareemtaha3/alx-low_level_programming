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
 * rev_string-function to revres
 * @s:string value
 * Return: no return value
 */
void rev_string(char *s)
{
	int len, i, j;
	char *rev;

	len = _strlen(s);
	i = len - 1;
	j = 0;
	while (!(j > i))
	{
		char tmp;

		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		--i;
		++j;
	}
}
