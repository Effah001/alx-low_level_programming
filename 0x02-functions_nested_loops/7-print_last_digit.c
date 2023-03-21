#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 125;

	int last_digit = num % 10;
		putchar(last_digit + '0');
	return (0);
}
