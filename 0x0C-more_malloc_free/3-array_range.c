#include "main.h"
#include <stdlib.h>

/**
*array_range -  a function that creates an array of integers
*@min : minomum number
*@max : maximum number
* Return: a
*/

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)

		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
	a[i] = min + i;
	}

	return (a);
}
