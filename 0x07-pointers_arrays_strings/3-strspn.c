#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int count = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
			i++;
		}
	return count;
}
