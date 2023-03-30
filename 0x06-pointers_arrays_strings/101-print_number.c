#include "main.h"

void print_number(int n)
{
	if (num < 0)
	{
		_putchar('-');
	num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
	return;
	}
	char digits[90];
	int i = 0;

	while (num > 0)
	{
	digits[i] = num % 10 + '0';
	num /= 10;
	}
	for (int j = i - 1; j >= 0; j--)
	{
	_putchar(digits[j]);
	}
}
