#include "sort.h"

/**
 * swap - the positions of two elements into an array
 * @array: array element
 * @ele1: array element
 * @ele2: array element
 */

void swap(int *array, ssize_t ele1, ssize_t ele2)
{
	int temp;

	temp = array[ele1];
	array[ele1] = array[ele2];
	array[ele2] = temp;
}




/**
 * Lomuto - a sorting scheme implementation
 * @array: array of integers
 * @first: first array element
 * @last: last array element
 * @size: size array
 *
 * Return: return position of sorted last element
 */

int Lomuto(int *array, ssize_t first, ssize_t last, size_t size)
{
	int pivot = array[last];
	ssize_t current = first, finder;

	for (finder =  first; finder < last; finder++)
	{
		if (array[finder] < pivot)
		{
			if (array[current] != array[finder])
			{
				swap(array, current, finder);
				print_array(array, size);
			}
			current++;
		}
	}
	if (array[current] != array[last])
	{
		swap(array, current, last);
		print_array(array, size);
	}
	return (current);
}





/*
 * qs- recursive function to sort array using qs
 *
 * @array: the array to sort
 * @first: the first index
 * @last: the last index
 * @size: size of the array
 */
void qs(int *array, ssize_t first, ssize_t last, ssize_t size)
{
	if (first < last)
	{
		size_t partition = Lomuto(array, first, last, size);

		qs(array, first, partition - 1, size);
		qs(array, partition + 1, last, size);
	}
}



/*
 * quick_sort- recursive function to sort the array using quick_sort
 *
 * @array: the array to sort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	qs(array, 0, size - 1, size);
}
