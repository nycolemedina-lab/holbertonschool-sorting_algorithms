#include "sort.h"

/**
* quick_sort_range - recursively sorts an array partition using Lomuto scheme
* @array: poinert to the array to sort
* @size: total size of the array
* @low: starting index of the partition
* @high: ending indet of the partition
*/
static void quick_sort_range(int *array, size_t size, int low, int high)
{
	int pivot, temp, i, j;

	if (low >= high)
		return;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}

	quick_sort_range(array, size, low, i);
	quick_sort_range(array, size, i + 2, high);
}



/**
* quick_sort - sort an array of integers in ascending order
*		using the quick sort algorithm (Lomuto scheme)
* @array: pointer to the array to sort
* @sie: size of the array
* Retur: void
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_range(array, size, 0, (int)size - 1);
}

