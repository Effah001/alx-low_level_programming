#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point for the program
 *
 * This function generates a random integer, and prints whether the last digit is
 * positive, negative, or zero.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int lastDigit;
srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = abs(n % 10);
if (n < 0)
	{
        lasDigit *= -1;
	}
if (lastDigit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
else if (lastDigit < 6 && lastDigit != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, -lastDigit);
}
return (0);
}