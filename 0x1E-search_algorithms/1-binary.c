#include "search_algos.h"
#include <math.h>
/**
 * binary_search - searches for a value in an array using binary search
 * @array: pointer to the first element of the array to be searched
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 if unsuccessful
 */

int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	size_t m;

	if (!array)
		return (-1);

	while (L <= R)
	{
		size_t i;

		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("%d", array[i]);
			if (i < R)
				printf(", ");
		}
		printf("\n");

		m = floor((L + R) / 2);

		if (array[m] < value)
		{
			L = m +	1;
		}
		else if (array[m] > value)
		{
			R = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
