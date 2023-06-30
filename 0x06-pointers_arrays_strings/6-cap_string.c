#include "main.h"
/**
 * is_separator-function to check if there is a separator char
 * @a:array of chars
 * Return: 0 or 1
 */


int is_separator(char a)
{
	char separators[] = " \t\n,.!?\"(){}";
	int i;

	for (i = 0; i < 12; ++i)
	{
		if (a == separators[i])
			return (1);
		else
			return (0);
	}

}




/**
 * cap_string-function to reverse the element of the array
 * @a:array of chars
 * Return:array of chars
 */
char *cap_string(char *a)
{
	int i = 0;

	for (i = 0; a[i] != '\0'; ++i)
	{
		if (is_separator(a[i]))
		{
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
			{
				a[i + 1] = a[i + 1] - 32;
			}
		}

	}

	return (a);
}
