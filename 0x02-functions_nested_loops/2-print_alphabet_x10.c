#include "main.h"

/**
 * print_alphabet_x10 - print the alpahbet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

}
}
