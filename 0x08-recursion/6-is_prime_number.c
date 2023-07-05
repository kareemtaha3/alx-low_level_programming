#include "main.h"


/**
 * is_prime_number-function to check if prime
 * @n:number
 * @i:counter
 * Return: 0 or 1
 */
int is_prime(int n, int i);
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
/**
 * is_prime-function to check if prime
 * @n:number
 * @i:counter
 * Return:0 or 1
 */
int is_prime(int n, int i)
{
	if (n <= i && n > 1)
		return (1);
	if (n % i == 0 || n <= 1)
		return (0);
	else
		return (is_prime(n, ++i));
}
