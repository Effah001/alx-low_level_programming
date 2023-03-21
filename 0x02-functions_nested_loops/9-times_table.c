#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		int result = i * j;

		_putchar('0' + result / 10 % 10);
		_putchar('0' + result % 10);
		if (j < 9)
		{
		_putchar(',');
		_putchar(' ');
}
}
		_putchar('$');
	_putchar('\n');
}
}
