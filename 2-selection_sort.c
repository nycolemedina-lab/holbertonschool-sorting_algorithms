#include "sort.h"
/**
* selection_sort - sort an array of integers in ascending orde
*		using the selection sort algorithm
* @array: pointer to the array of integers
* @size: size of the array
* Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t i, jmin, j;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		jmin = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jmin])
				jmin = j;
		}
		if (jmin != i)
		{
			temp = array[i];
			array[i] = array[jmin];
			array[jmin] = temp;
			print_array(array, size);
		}
	}
}
