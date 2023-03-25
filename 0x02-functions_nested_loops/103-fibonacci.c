#include <stdio.h>

/**
* main - finds and prints the sum of the even-valued terms
* followed by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2;
	unsigned long int max_val = 4000000;
	unsigned long int even_sum = 0;

	while (fib2 <= max_val) {

	if (fib2 % 2 == 0)
	{
	even_sum += fib2;
	}
	unsigned long int fib3 = fib1 + fib2;
	fib1 = fib2;
	fib2 = fib3;
	}

	printf("%lu\n", even_sum);

	return (0);
}
