#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num = 0;

	FILE *fp = fopen(filename, "r");

	char *file = malloc(letters + 1);

	if (!fp || !file)
	{
		return (0);
	}
	else
	{
		while (fgets(file, letters, fp))
		{
			printf("%s", file);
			num += strlen(file);
		}
	}

	fclose(fp);

	return (num);
}
