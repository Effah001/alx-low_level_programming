#include <stddef.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted
 *
 * Return: num 
 */
int _atoi(char *s)
{
	int num = 0;
	int i = 0;
	int is_neg = 0;
	int num_of_neg = 0;

	while (s[i] == '-' || s[i] == '+')
	{
	if (s[i] == '-')
	{
		num_of_neg++;
        }
		i++;
	}
	
	if (num_of_neg % 2 == 1)
	{
		is_neg = 1;
	}
	
	for (; s[i] != '\0'; i++)
	{
		num = num * 10 + (s[i] - '0');
	}
	
	if (is_neg)
	{
		num = -num;
	}

return num;
}
