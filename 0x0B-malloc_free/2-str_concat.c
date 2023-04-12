#include "main.h"
#include <stdlib.h>

/**
*_str_concat - concatenate two strings
*@s1 : string to be copied
*@s2 : string to be copied
*@s3 : string to be copied to
* Return: s3
*/

char *str_concat(char *s1, char *s2)
	{
	int i = 0;
	int j = 0;
	int k = 0;
	char * s3 = NULL;

	if (s1 == NULL)
		s1 = "";	
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++ ;
	}
	while (s2[j] != '\0')
	{
		j++ ;
	}

s3 = (char *) malloc(sizeof(char) * (i + j + 1));

	if (s3 == NULL)
		return NULL;

	j = 0;
	
	while (s1[k] != '\0')
	{
	s3[k] = s1[k];
	k++;
	}
	
	while (s2[j] != '\0')
	{
	s3[k] = s2[j];
	j++;
	k++;
	}


	s3[k] = '\0';

	return s3;
	}
