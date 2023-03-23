#include "main.h"

/**
 * print_diagonal - prints a diagonal
 *@n : number of diagonals to be printed
 * Return: Always 0.
 */
void print_diagonal(int n)
{

	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	for (j = 0; j < n; j++)
	{
	for (i = 0; i < j; i++)
	{
		_putchar(' ');

	}
		 _putchar('\\');
		_putchar('\n');
}

}
