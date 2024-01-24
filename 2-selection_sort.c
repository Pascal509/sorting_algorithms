#include "sort.h"

/**
 * swap - function to swap two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}



/**
 * selection_sort - sorts an array of integers, Selection sort algorithm
 *
 * @array: array of integers
 * @size: size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_ind;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_ind = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_ind])
				min_ind = j;
		}
		if (min_ind != i)
		{
			swap(&array[min_ind], &array[i]);
			print_array(array, size);
		}
	}
}
