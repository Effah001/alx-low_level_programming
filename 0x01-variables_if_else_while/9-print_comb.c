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
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
