#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include "main.h"

/**
 *create_file - a function that creates a file
 *@filename : pointer to the file
 *@text_content : content to be written.
 *Return: the number of characters
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fp = fopen(filename, "w");

	if (!fp)
		return (-1);

	chmod(filename, S_IRUSR | S_IWUSR);

	if (text_content)
	{
		fprintf(fp, "%s", text_content);
	}

	fclose(fp);

	return (1);
}

