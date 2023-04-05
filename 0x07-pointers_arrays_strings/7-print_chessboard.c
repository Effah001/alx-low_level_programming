#include "main.h"
/**
* print_chessboard - function that prints the chessboard.
*Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int y;
	int x;

	for (x = 0; x < 8; x++)
	{
	for (y = 0; y < 8; y++)
	{
<<<<<<< HEAD
		_putchar(a[i][j]);
=======
		_putchar(a[x][y]);
>>>>>>> 198d69a265a824b7bde55245a392771b95edfae1
	}
		_putchar('\n');
	}
}
