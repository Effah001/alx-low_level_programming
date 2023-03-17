#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point for the program
 *
 * This function generates a lowercase alphabets in reverse
 *
 * Return: Always 0 (success)
 */
int main() 
{
int i;
for(i = 0; i < 16; i++)
{
if(i < 10)
{
putchar(i + '0');
}
else 
{
putchar(i - 10 + 'a');
}
}

putchar('\n');

return 0;
}
