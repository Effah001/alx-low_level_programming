#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14, 10 times
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int  i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			_putchar(j);
			_putchar(j % 10 + '0');
		}
			_putchar('\n');

}
}
