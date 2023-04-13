#include "main.h"
#include <stdlib.h>

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
