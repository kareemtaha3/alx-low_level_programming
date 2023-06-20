
#include "main.h"
/**
 * main - check the code
 * description: print _putchar
 * Return: Always 0.
 */
int main(void)
{
	char word[] = "_putchar";
	int ch = 0;

	for (ch = 0; ch < 8; ++ch)
	{
		_putchar(word[ch]);
	}
	_putchar('\n');
	return (0);
}

