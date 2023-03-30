#include "main.h"
/**
*print_number - print integers from the user
*@num : input value
*/

void print_number(int num)
{
	int divisor = 1;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	while (num / divisor >= 10)
	{
	divisor *= 10;
	}
	while (divisor > 0)
	{
	int digit = (num / divisor) % 10;

	_putchar(digit + '0');
	divisor /= 10;
	}
}
