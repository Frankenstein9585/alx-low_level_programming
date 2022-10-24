#include "main.h"
#include <stdio.h>
/**
  * print_array - prints every other character of a string
  *
  * @a: string to be operated on
  * @n: number of elements to be printed
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
		_putchar(',');
		_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}
