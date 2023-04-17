#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name;
	char *new_owner;

	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return NULL;

	new_name = malloc(_strlen(name) + 1);
	if (new_name == NULL)
	{
	return NULL;
	}

	_strcpy(new_name, name);

	new_owner = malloc(_strlen(owner) + 1);
	if (new_owner == NULL)
	{
	return NULL;
	}
	_strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return new_dog;
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

