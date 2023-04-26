#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order using
 *                  the Selection sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min_idx;

/* One by one move boundary of unsorted subarray */
for (i = 0; i < size - 1; i++)
{
/* Find the minimum element in unsorted array */
min_idx = i;
for (j = i + 1; j < size; j++)
if (array[j] < array[min_idx])
{
min_idx = j;
}

/* Swap the found minimum element with the first element */
if (min_idx != i)
{
swap_ints(&array[min_idx], &array[i]);
print_array(array, size);
}
}
}

