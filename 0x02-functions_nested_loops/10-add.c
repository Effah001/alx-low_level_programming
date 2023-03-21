#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


	int add(int a, int b)
	{
	int result = a + b;

	return (result);
	}

	int main(void)
	{
	int a = 4;
	int b = 5;
	int result = add(a, b);

	printf("%d\n", result);
	return (0);
}
