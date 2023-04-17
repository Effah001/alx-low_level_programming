#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
*init_dog -  initializes dog
*@name : name of dog
*@owner : owner of dog
*@age : age of dog
*@_strlen : calculate the lenght
*@_strcpy : copy the string
*Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(_strlen(name) + 1);
	if (d->name != NULL)
	_strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner != NULL)
	_strcpy(d->owner, owner);
}


/**
* _strcpy -  copies a string pointed by str to dest
*@src : pointer for thr initial string
*@dest : pointer to be copied to
*Return: nothing
*/

char *_strcpy(char *dest, char *src)
	{
	char *dest_start = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
		*dest = '\0';
	return (dest_start);
}

/**
*_strlen - calculate the lenght of a string
*@s : pointer to the string
* Return: length
*/

	int _strlen(char *s)
	{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	}
	return (len);
	}

