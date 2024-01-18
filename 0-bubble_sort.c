#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm.
 *
 * @array: the array to be sorted.
 * @size: the size of the array.
*/

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;
	int flag = 1;

	if (!array || size < 2)
		return;

	while (flag == 1)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				flag = 1;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				for (j = 0; j < size; j++)
				{
					if (j == size - 1)
						printf("%d\n", array[j]);
					else
						printf("%d, ", array[j]);
				}
			}
		}
	}
}
