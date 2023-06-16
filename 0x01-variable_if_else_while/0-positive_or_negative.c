#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * description: print value of n if zero,positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n > 0)
		printf("is positive");
	else if (n < 0)
		printf("is negaive");
	else if (n == 0)
		printf("is zero")
return (0);
}
