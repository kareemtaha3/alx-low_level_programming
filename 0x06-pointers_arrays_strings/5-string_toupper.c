#include "main.h"
/**
 * string_toupper-function to reverse the element of the array
 * @a:array of chars
 * Return:array of chars
 */
char *string_toupper(char *a)
{
	while (*a != '\0')
	{
		if ((int)*a >= 97 && (int)*a <= 122)
			*a = (int)*a - 32;
		++a;
	}
	return (a);
}
