#include "main.h"
#include <stdio.h>
/**
 *print_to_98-function print the clock
 *@n:parameter
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		int i, flag = 0;

		for (i = n; i <= 98; ++i)
		{
			if (flag)
				printf(", ");
			printf("%d", i);
			flag = 1;
		}
	}
	else
	{
		int i, flag = 0;

		for (i = n; i >= 98; --i)
		{
			if (flag)
				printf(", ");
			printf("%d", i);
			flag = 1;
		}
	}


}
