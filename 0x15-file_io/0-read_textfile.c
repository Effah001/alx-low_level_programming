#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num = 0;
	FILE *fp;
	char *file;

	if (!filename)
		return(0);

	fp = fopen(filename, "r");

	file = malloc(letters + 1);

	if (!fp || !file)
	{
		return (0);
	}
	else
	{
		while (fgets(file, letters, fp))
		{
			if(ferror(fp))
			{
				return (0);
			}
			num += write(STDOUT_FILENO, file, strlen(file));
		}
	}

	fclose(fp);

	return (num);
}
