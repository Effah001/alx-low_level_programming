#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
	{
	int n = 32;
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
}
