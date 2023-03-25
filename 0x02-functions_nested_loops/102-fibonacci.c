#include "main.h"

/**
* main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
* separated by a comma followed by a space.
*
* Return: Always 0.
*/

int main(void)
	{
	int i, fib[50];
	
	fib[0] = 1;
	fib[1] = 2;
		_putchar(fib[0] + '0');
		_putchar('\n'):
		_putchar(fib[1] + '0');
		_putchar('\n');
	for(i = 2; i < 50; i++)
	{
		fib[i] = fib[i-1] + fib[i-2]; 
		int n = fib[i];
		
	while(n > 0)
	{
		_putchar((n % 10) + '0'); 
		n /= 10;
	}
	_putchar('\n');
	}
}
