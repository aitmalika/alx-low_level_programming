#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * integers using this Linear search algorithm.
 * @array: pointer to this first element of the array to search in.
 * @size: number of element in array
 * @value: value to search for
 *
 * If value is not present in this array or if array is NULL return -1.
 *
 * Return: first the index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value) /* if (*(array + i) == value) */
			return (i);
	}
	return (-1);
}