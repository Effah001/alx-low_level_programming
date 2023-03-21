#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
	for (minute = 0; minute < 60; minute++)
	{
		putchar((hour / 10) + '0');
		putchar((hour % 10) + '0');
		putchar(':');
		putchar((minute / 10) + '0');
		putchar((minute % 10) + '0');
		putchar('\n');
}
}

	return (0);
}

