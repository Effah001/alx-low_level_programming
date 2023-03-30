#include "main.h"
/**
*print_number - print integers from the user
*
*/

void print_number(int num)
{
	int j;
	int i = 0;
	int digits[50];

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
	while (num > 0)
	{
	digits[i] = num % 10 + '0';
	num /= 10;
	i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
	_putchar(digits[j]);
	}
}
