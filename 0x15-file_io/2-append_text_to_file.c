#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include "main.h"

/**
 *append_text_to_file - a function that appends a file
 *@filename : pointer to the file
 *@text_content : content to be written.
 *Return: the number of characters
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp = fopen(filename, "a");
	if (!fp)
		return (-1);

	if(text_content)
	{
		fprintf(fp,"%s", text_content);
	}

	fclose(fp);

	return (1);
}

