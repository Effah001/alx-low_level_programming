#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers using the Bubble sort algorithm.
 * @array: The array to be sorted
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
    size_t x = 0;
    size_t y = 0;
    int temp;
    int swpd = 0;

    for (x ; x < size - 1; x++)
    {
        for (y ; y < size - x - 1; ++y)
        {
            if (array[y] > array[y + 1])
            {
                temp = array[y];
                array[y] = array[y + 1];
                array[y + 1] = temp;

                swpd = 1;
                print_array(array, size);
            }
        }
        if (swpd == 0)
            break;
    }
}
