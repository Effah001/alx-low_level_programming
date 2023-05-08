#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num = 0;
	int op;
	char *file;

	if (!filename)
		return(0);

	op = open(filename, O_RDONLY);

	file = malloc(sizeof(char) * letters);

	if (!op || !file)
	{
		return (0);
	}
	else
	{
		while (fgets(file, letters, op))
		{
			if(ferror(op))
			{
				return (0);
			}
			num += write(STDOUT_FILENO, file, strlen(file));
		}
	}

	fclose(fp);

	return (num);
}
