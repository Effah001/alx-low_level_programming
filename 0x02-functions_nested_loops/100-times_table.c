#include "main.h"

/**
 * print_times_table - prints out the n times table
 */

void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	int result = i * j;

	if (j == 0)
	{
		_putchar(result + '0');
	}
	if (result < 100 )
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + result / 10 % 10);
		_putchar('0' + result % 10);
	}
	else if (result > 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar('0' + result / 100 );
		_putchar('0' + (result / 10) % 10);
		_putchar('0' + result % 10);
	}
	else if (result < 10 && j > 0)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + result);
		}
	}
		_putchar('\n');
	}
}
