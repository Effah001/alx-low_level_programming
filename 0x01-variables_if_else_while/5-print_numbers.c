#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point for the program
 *
 * This function generates a lowercase alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
printf("%c", a);
}
putchar('\n');
return (0);
}
