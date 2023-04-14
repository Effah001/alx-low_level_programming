#include "main.h"
#include <stdlib.h>

/**
*string_nconcat -  a function that concatenates two strings.
*@s1 : first string
*@s2 : second string
*@n : number of characters to be copied
* Return: s3
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
	{
	int x = 0;
	unsigned int y = 0;
	int z = 0;
	char *s3 = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}

s3 = malloc(sizeof(char) * (x + y);

	if (s3 == NULL)
		return (NULL);

	y = 0;

	while (s1[z] != '\0')
	{
	s3[z] = s1[z];
	z++;
	}

	while (s2[y] != '\0' && y < n)
	{
	s3[z] = s2[y];
	y++;
	z++;
	}
	s3[z] = '\0';
	return (s3);
	}
