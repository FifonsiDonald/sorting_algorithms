#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int swap;
	size_t new, i, j;

	if(arr == NULL || size < 2)
		return;
	j = size;
	while (j > 0)
	{
		new = 0;
		for (i = 0; i < j - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap = arr[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				new = i + 1;
				print_array(array, size);
			}
		}
		j = new;
	}
}
