#include "sort.h"

/**
 * swap - the positions of two elements into an array
 * @array: array
 * @item1: array element
 * @item2: array element
 */
void swap(int *array, int item1, int item2)
{

	int tmp;

	tmp = array[item1];
	array[item1] = array[item2];
	array[item2] = tmp;
}


/**
 * shell_sort - function that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence
 * @size: size of the array
 * @array: list with numbers
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i;

	if (array == NULL || size < 2)
		return;

	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			int temp = array[i];
			size_t j = i;

			while (j >= gap && array[j - gap] > temp)
			{
				swap(array, j, j - gap);
				j -= gap;
			}

			array[j] = temp;
		}

		if (gap != 1)
			print_array(array, size);

		gap /= 3;
	}

}
