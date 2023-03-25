#include "main.h"
/**
 * print_times_table - prints out the n times table
 *@n : number of times to be printed
 */

void print_times_table(int n)
{
	int i, j;

	if ( n < 15)
	{
	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
	int result = i * j;

	if (j == 0)
	{
		_putchar(result + '0');
	}
	else if (result < 10)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + result);
		}
	else if (result < 100 )
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
		_putchar('0' + result / 100);
		_putchar('0' + (result / 10) % 10);
		_putchar('0' + result % 10);
	}

	}
		_putchar('\n');
	}
}
}
