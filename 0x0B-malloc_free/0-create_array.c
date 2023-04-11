#include "main.h"
#include <stdlib.h>
/**
* create_array - create an array of c characters.
*@size : determines the size of the array
*@c : the character to be initialized to
* Return: a
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	if (size == 0)

		return (NULL);

	a = (char *) malloc(sizeof(char) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	a[i] = c;

		return (a);
}
