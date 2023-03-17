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
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch\n);
}

return (0);
}
