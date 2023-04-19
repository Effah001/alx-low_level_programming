#include <stdio.h>
#include "function_pointers.h"

/**
**array_iterator - iterate through an array
*@array : hold the array of integers
*@action : pointer to function
*@size : size of integer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
