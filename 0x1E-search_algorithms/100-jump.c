#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an array using jump search
 * @array: pointer to the first element of the array to be searched
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where value is located or -1 if unsuccessful
 */

int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = floor(sqrt(size));

	while (array[b - 1] < value)
	{
		/* printf("Value checked array[%lu] = [%d]\n", a, array[a]); */
		a = b;
		b += floor(sqrt(size));

		if (a >= size)
		{
			return (-1);
		}
	}

	while (array[a] < value)
	{
		a += 1;
		if (a == b)
		{
			return (-1);
		}
	}

	if (array[a] == value)
	{
		/* printf("Value checked array[%lu] = [%d]\n", a, array[a]); */
		return (value);
	}
	return (-1);
}
