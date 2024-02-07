#include "search_algos.h"

/**
 * print_array - print the elements of the array
 * @array: pointer to the array
 * @start: start of the array
 * @end: end of the array
 */

void print_array(int *array, int start, int end)
{
	printf("%d", array[start]);
	start++;
	while (start < end)
	{
		printf(", ");
		printf("%d", array[start]);
		start++;
	}
	printf("\n");
}

/**
 * binary_search - Search an array using binary search
 * @array: point to the array
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: index if found or (-1 if no result found)
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid = 0;

	while (low <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high + 1);
		mid = (low + high) / 2;
	/*	printf("mid = %d\n", mid);*/
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		if (array[mid] == value)
			return (mid);
	}
	return (-1);
}
