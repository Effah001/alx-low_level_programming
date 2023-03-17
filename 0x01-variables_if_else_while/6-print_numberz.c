#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point for the program
 *
 * This function generates lowercase alphabets, excluding 'e' and 'o'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar('\n');
return 0;
}
