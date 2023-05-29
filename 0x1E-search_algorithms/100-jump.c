#include "search_algos.h"
#include <math.h>
/**
 * jump_search - a function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 * @array: the array
 * @size: size of the array
 * @value: the value to search for
 * Return: the index of the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, j, index;

	jump = (size_t)sqrt(size);
	if (!array)
		return (-1);
	for (index = 0; index < size; index += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index]
			|| ((index + jump >= size)
			|| (value == array[index + jump]))
			|| (value > array[index] && value < array[index + jump]))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					index, index + jump);
			for (j = index; j < size && j <= index + jump; j++)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	return (-1);
}
