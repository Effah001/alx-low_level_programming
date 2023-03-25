#include "main.h"

/**
 * times_table - prints out the 9 times table
 */

void times_table(void)
{
	int i, j;

	for (i = 0 i <= 9; i++)
	{
	for (j = 0 j <= 9; j++)
	{
	int result = i * j;

	if (result > 9)
	{
		_putchar('0' + result / 10 % 10);
		_putchar('0' + result % 10);
	}
	else
	{
		_putchar('0' + result);
		_putchar(' ');
	}
	if (j < 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
		_putchar('\n');
	}
	}
