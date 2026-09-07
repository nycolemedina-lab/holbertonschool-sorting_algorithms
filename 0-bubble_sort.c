#include "sort.h"
/**
* bubble_sort - sorts an array if integers in ascending order
*		using the bubble sort algorithm
* @array: pointer to the first element of the array
* @size: number of elements in the array
* Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
