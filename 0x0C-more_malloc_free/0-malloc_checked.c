#include "main.h"
#include <stdlib.h>

/**
* maloc_checked - a function that allocates memory using malloc
*@b : size of integer
* Return: a
*/

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(sizeof(unsigned int) * b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
