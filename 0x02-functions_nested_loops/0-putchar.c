#include <string.h>
#include <unistd.h>
#include "main.h"
/**
* _putchar - writes the character c to stdout
* @c: The character to print
* description: print _putchar
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately
*/
int _putchar(char *c)
{
	return (write(1, c, strlen(c)));
}
/**
 * main - check the code
 * description: print _putchar
 * Return: Always 0.
 */
int main(void)
{
	_putchar("_putchar\n");
	return (0);	
}

