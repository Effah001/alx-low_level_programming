#include "main.h"
#include <stdlib.h>

/**
*_calloc - a function that allocates memory for an array, using malloc
*@nmemb : number of elements
*@size : size of array
* Return: a
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *a;

	if (size == 0 || nmemb == 0)

		return (NULL);

	a = calloc (size, nmemb);
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
