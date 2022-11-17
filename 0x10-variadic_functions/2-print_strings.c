#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_strings - prints strings followed by a new line
  *
  * @separator: to be printed between strings
  * @n: number of arguments to be printed
  *
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *string = va_arg(ap, char*);

		if (string == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", string);
		if (separator != NULL)
			if (n - i != 1)
				printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
