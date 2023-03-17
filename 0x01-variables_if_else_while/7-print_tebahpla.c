#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point for the program
 *
 * This function generates a lowercase alphabets in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
