#include "main.h"
/**
 * factorial-function to print string
 * @n:number
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
