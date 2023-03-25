#include "main.h"

/**
 * times_table - prints out the 9 times table
 */

void times_table(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
	for (j = 1; j <= 9; j++)
	{
	int result = i * j;
	if (result > 9)
	{
		putchar('0' + result / 10 % 10);
		putchar('0' + result % 10);
	} 
	else 
	{
		putchar('0' + result % 10);
		putchar(' ');
	}
	if (j < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');
	}
