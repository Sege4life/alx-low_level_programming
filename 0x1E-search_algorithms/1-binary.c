#include "search_algos.h"

/**
 * binary_recursive - a function that recursively searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: the array of integers
 * @first: first index of the array
 * @last: last index of the array
 * @value: the value to search for
 * Return: returns the index of value or -1 if not found
 */
int binary_recursive(int *array, size_t first, size_t last, int value)
{
	size_t mid;
	int x;

	if (!array || last < first)
		return (-1);
	printf("Searching in array: ");
	for (mid = first; mid <= last; mid++)
	{
		if (mid != first)
			printf(", ");
		printf("%d", array[mid]);
	}
	printf("\n");
	mid = (first + last) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		x = (binary_recursive(array, first, mid - 1, value));
	else if (array[mid] < value)
		x = (binary_recursive(array, mid + 1, last, value));
	return (x);
}

/**
 * binary_search - a function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to search for
 * Return: returns the index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}
