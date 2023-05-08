#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include "main.h"

int create_file(const char *filename, char *text_content)
{
	FILE *fp = fopen(filename, "w");
	if (!fp)
		return (-1);

	chmod(filename, S_IRUSR | S_IWUSR);

	if(text_content)
	{
		fprintf(fp,"%s", text_content);
	}

	fclose(fp);

	return (1);
}

