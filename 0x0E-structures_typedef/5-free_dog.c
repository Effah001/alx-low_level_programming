#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*free_dog -  free dog
*@name : name of dog
*@owner : owner of dog
*@age : age of dog
*@d : pointer to struct dog
*Return: nothing
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free(d->name);
	free(d->owner);
	free(d);
}
