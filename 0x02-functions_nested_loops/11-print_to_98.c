#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
	int main(void)
	{
	int i;
	int n = 90;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
	{
		printf("%d, ", i);
	}
	}
	else
	{
		for (i = n; i > 98; i--)
	{
		printf("%d, ", i);
	}
	}

	printf("98\n");

	return (0);
}
