#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		int result = i * j;

		putchar('0' + result / 10 % 10);
		putchar('0' + result % 10);
		if (j < 9)
		{
		putchar(',');
		putchar(' ');
}
}
		putchar('$');
	putchar('\n');
}
	return (0);
}
