#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, k;

	if (array == NULL)
		return  (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (k = left; k <= right; k++)
		{
			printf("%d", array[k]);
			if (k < right)
				printf(", ");
		}
		printf("\n");
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
