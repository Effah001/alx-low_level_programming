#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * This function generates a lowercase and uppercase alphabets
 *
 * Return: Always 0 (success)
 */
int main()
{
int i, j;
for(i = 0; i < 10; i++)
{
for(j = 0; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
}
}

return (0);
}
