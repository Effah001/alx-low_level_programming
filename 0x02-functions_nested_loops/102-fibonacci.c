#include <stdio.h>

/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
* separated by a comma followed by a space.
*
* Return: Always 0.
*/
	int main()
	{
	unsigned long long int a = 1, b = 2, c, count = 0;

	printf("%lu\n%lu\n", a, b);

	while (count < 48)
	{
	c = a + b;
		printf("%lu\n", c);
	a = b;
	b = c;
	count++;
	}
return 0;
}
