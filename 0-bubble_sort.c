#include "sort.h"

/** perform the bubble sort **/
void bubble_sort(int *array, size_t size)
{
	/** loop to access each array element **/
	size_t j, i;

	if (!array || !size)
		return;

	for (j = 0; j < size - 1; j++)
	{
		/** loop to compare array elements **/
		for (i = 0; i < size - j - 1; i++)
		{
			/** compare two adjacent elements to sort in ascending order**/
			if (array[i] > array[i + 1])
			{
				/** Swapping occurs if elements are not in th right order **/
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
