#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void copy(char *file_from, char *file_to);

/**
*main - main function
*@argv : determin the arguments
*@argc : number of arguments
*Return: the number of characters
*/

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy(argv[1], argv[2]);

	return (0);
}

/**
*copy - copy the function
*@file_from : pointer to file source file
*@file_to: pointer to file destination file
*Return: the number of characters
*/


void copy(char *file_from, char *file_to)
{
int f1;
int f2;
char buffer[1024];
int n_read, n_write;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

f1 = open(file_from, O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

f2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
		exit(99);
	}

while (n_read == 1024)
{
	n_read = read(f1, buffer, sizeof(buffer));
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (write(f2, buffer, n_read) == -1)
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", file_to);
		exit(99);
		
	}

if (fclose(f1) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close file %s\n", file_from);
	exit(100);
	}

if (fclose(f2) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close file %s\n", file_from);
	exit(100);
	}
}
