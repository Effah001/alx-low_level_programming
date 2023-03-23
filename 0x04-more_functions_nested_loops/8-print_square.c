#include "main.h"

/**
 *print_square - prints a square
 *@size: print the number o squares
 * Return: Always 0.
 */
void print_square(int size)
	{

	int j;
	int i;

	if (size <= 0)
	{
		_putchar('\n')
	}
	
	for (i = 0; i < size; i++)
	{

	for (j = 0; j < size; j++)
	{
		_putchar('#');
	}
		_putchar('\n');

	}
		_putchar('\n');
}
