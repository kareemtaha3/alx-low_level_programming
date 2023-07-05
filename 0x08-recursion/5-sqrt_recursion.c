#include "main.h"
/**
 * _sqrt-function to get the sqrt
 * @n:number
 * @i:counter
 * Return:sqrt
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	_sqrt(n, ++i);
}

/**
 * _sqrt_recursion-function to get sqrt
 * @n:number
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

