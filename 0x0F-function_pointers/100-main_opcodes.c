#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
    char *address;
    int nbytes;
    int i;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    nbytes = atoi(argv[1]);

    if (nbytes < 0)
    {
        printf("Error\n");
        return (2);
    }

    address = (char *)main;

    for (i = 0; i < nbytes; i++)
    {
        printf("%02x", address[i] & 0xff);
        if (i < nbytes - 1)
            printf(" ");
    }

    printf("\n");

    return (0);
}
