#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int num)
{
	int num = 125;

	int last_digit = num % 10;
		_putchar(last_digit + '0');
	return (0);
}
