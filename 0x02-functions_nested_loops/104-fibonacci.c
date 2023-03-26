#include <stdio.h>

/**
* main - Prints first 98 Fibonacci numbers, starting with 1 and 2,
* separated by a comma followed by a space.
*
* Return: Always 0.
*/
	int main(void)
	{
	unsigned long int a = 1, b = 2, c, count = 0;

	printf("%lu, %lu, ", a, b);

	while (count < 98)
	{
	c = a + b;
	if (count == 97)
	{
		printf("%lu", c);
	}
	else
	{
		printf("%lu, ", c);
	}
	a = b;
	b = c;
	count++;
	}
		putchar('\n');
return (0);
}
