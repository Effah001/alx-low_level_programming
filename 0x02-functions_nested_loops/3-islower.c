#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
	{
	char ch = 'c';

	if (islower(ch))
	{
	putchar('1');
	}
	else
	{
	putchar('0');
	}
	return (0);
}
