#include "variadic_functions.h"
/**
 * print_numbers-to sum all args
 * @separator:string
 * @n:number of args
 * Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
		return;
	va_list args;
	int i;

	va_start(args, n);
	for (i = 0; i < n - 1; ++i)
	{
		printf("%d", va_arg(args, unsigned int));
		printf("%s", separator);
	}
	printf("%d", va_arg(args, unsigned int));
	printf("\n");
	va_end(args);
}
