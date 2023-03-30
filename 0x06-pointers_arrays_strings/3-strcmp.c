#include "main.h"


	int _strcmp(char *s1, char *s2)
	{

	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
	i++;
	j++;
	}
	
	if(s1[i] == s2[j])
		return (0);
	else if (s1[i] > s2[j] )
		return (1);
	else if(s1[i] < s2[j])
		return (-1);
}
