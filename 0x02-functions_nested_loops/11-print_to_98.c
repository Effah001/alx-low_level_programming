#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
	void print_to_98(int n)
	{
	int i;
	int n = 90;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
	{
		_putchar(i);
	}
	}
	else
	{
		for (i = n; i > 98; i--)
	{
		_putchar(i);
	}
	}

	_putchar("98\n");

}
