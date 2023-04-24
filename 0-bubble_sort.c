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
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
bool swapped = true;
size_t i, j;

/* Iterate over the array until no swaps are made */
for (i = 0; swapped && i < size - 1; ++i)
{
swapped = false;
/* Compare adjacent elements and swap them if necessary */
for (j = 0; j < size - i - 1; ++j)
{
if (array[i] > array[j + 1])
{
swap_ints(&array[j], &array[j + 1]);
swapped = true;
/* Print array after swap */
print_array(array, size);
}
}
}
}
