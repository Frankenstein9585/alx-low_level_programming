#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_numbers - prints numbers followed by a new line
  *
  * @separator: to be printed between numbers
  * @n: number of arguments to be printed
  *
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
			if (n - i != 1)
				printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
