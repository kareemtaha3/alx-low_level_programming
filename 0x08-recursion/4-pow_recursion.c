#include "main.h"
/**
 * _pow_recursion-function to raise a value to a power
 * @x:value
 * @y:power
 * Return: value raised to the power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
