#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 *
 *
 *description:write function
 *    ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: This time we return an error 1.
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
