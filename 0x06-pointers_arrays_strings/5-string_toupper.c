#include "main.h"
/**
 * string_toupper-function to reverse the element of the array
 * @a:array of chars
 * Return:array of chars
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
		++i;
	}
	return (a);
}
