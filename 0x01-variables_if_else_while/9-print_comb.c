#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * This function generates a lowercase and uppercase alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
return (0);
}
