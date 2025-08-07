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
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - Recursively applies Quick sort.
 * @array: The array.
 * @low: The lower index.
 * @high: The higher index.
 * @size: The size of the array (for printing).
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * partition - Lomuto partition scheme for Quick sort.
 * @array: The array to partition.
 * @lo: Lower bound of the partition.
 * @hi: Upper bound of the partition.
 * @size: The size of the array (for printing).
 *
 * Return: The final pivot position.
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int i = lo - 1, j;
	int pivot = array[hi], aux;

	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[hi])
	{
		aux = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = aux;
		print_array(array, size);
	}
	return (i + 1);
}
