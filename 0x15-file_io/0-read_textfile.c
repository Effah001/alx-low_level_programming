#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>
#include "main.h"

/**
 *read_textfile - a function that reads a file
 *@filename : pointer to the file
 *@letters : number of letters it should read and print
 *Return: the number of characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num = 0;
	int op;
	ssize_t file;
	char *mem;

	if (!filename)
		return (0);

	op = open(filename, O_RDONLY);

	mem = malloc(sizeof(char) * letters);

	if (!op || !mem)
	{
		return (0);
	}
	else
	{
	file = read(op, mem, letters);
	close(op);
	if (file == -1)
	{
		return (0);
	}
	}
	num += write(STDOUT_FILENO, mem, file);

	return (num);
}
